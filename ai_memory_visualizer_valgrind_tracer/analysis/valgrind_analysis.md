# Program: stack\_example.c

# Valgrind Output:
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./stack\_example
==2342== Memcheck, a memory error detector
==2342== Copyright (C) 2002-2024, and GNU GPL'd, by Julian Seward et al.
==2342== Using Valgrind-3.26.0 and LibVEX; rerun with -h for copyright info
==2342== Command: ./stack\_example
==2342==
stack\_example: recursion and stack frames
[enter] depth=0
  &local\_int=0x1ffeffffc4  p\_local=0x1ffeffffc4  local\_int=100
  local\_buf=0x1ffeffffd0  local\_buf[0]=A
  &marker=0x1fff000014  marker=0
[enter] depth=1
  &local\_int=0x1ffeffff94  p\_local=0x1ffeffff94  local\_int=101
  local\_buf=0x1ffeffffa0  local\_buf[0]=B
  &marker=0x1ffeffffe4  marker=10
[enter] depth=2
  &local\_int=0x1ffeffff64  p\_local=0x1ffeffff64  local\_int=102
  local\_buf=0x1ffeffff70  local\_buf[0]=C
  &marker=0x1ffeffffb4  marker=20
[enter] depth=3
  &local\_int=0x1ffeffff34  p\_local=0x1ffeffff34  local\_int=103
  local\_buf=0x1ffeffff40  local\_buf[0]=D
  &marker=0x1ffeffff84  marker=30
[exit] depth=3
  &local\_int=0x1ffeffff34  p\_local=0x1ffeffff34  local\_int=103
  local\_buf=0x1ffeffff40  local\_buf[0]=D
  &marker=0x1ffeffff84  marker=30
[exit] depth=2
  &local\_int=0x1ffeffff64  p\_local=0x1ffeffff64  local\_int=102
  local\_buf=0x1ffeffff70  local\_buf[0]=C
  &marker=0x1ffeffffb4  marker=20
[exit] depth=1
  &local\_int=0x1ffeffff94  p\_local=0x1ffeffff94  local\_int=101
  local\_buf=0x1ffeffffa0  local\_buf[0]=B
  &marker=0x1ffeffffe4  marker=10
[exit] depth=0
  &local\_int=0x1ffeffffc4  p\_local=0x1ffeffffc4  local\_int=100
  local\_buf=0x1ffeffffd0  local\_buf[0]=A
  &marker=0x1fff000014  marker=0
==2342==
==2342== HEAP SUMMARY:
==2342==     in use at exit: 0 bytes in 0 blocks
==2342==   total heap usage: 1 allocs, 1 frees, 1,024 bytes allocated
==2342==
==2342== All heap blocks were freed -- no leaks are possible
==2342==
==2342== For lists of detected and suppressed errors, rerun with: -s
==2342== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)


# Summary of Valgrind
Valgrind reports no errors for the stack\_example.c because the progrm uses only stack allocated variables. Each recursive call creates its own independent stack frame that is properly destroyed when function returns. No heap memory is misused, no pointers outlive their stack framce, no invalid reads or writes occur. The single heap allocation shown in Valgrind's summary comes from internal libc usage, not code. Freed automatically. Program demonstrates stack behaviour and Valgrind confirms that it contains no leaks or memory violations.

- - -

# Project: heap\_example.c

# Valgrind Output:
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./heap\_example
==2469== Memcheck, a memory error detector
==2469== Copyright (C) 2002-2024, and GNU GPL'd, by Julian Seward et al.
==2469== Using Valgrind-3.26.0 and LibVEX; rerun with -h for copyright info
==2469== Command: ./heap\_example
==2469==
heap\_example: allocations and a deliberate leak
  alice=0x4a90480 name=0x4a904d0 age=30
  bob=0x4a90520 name=0x4a90570 age=41
==2469==
==2469== HEAP SUMMARY:
==2469==     in use at exit: 6 bytes in 1 blocks
==2469==   total heap usage: 5 allocs, 4 frees, 1,066 bytes allocated
==2469==
==2469== 6 bytes in 1 blocks are definitely lost in loss record 1 of 1
==2469==    at 0x4850858: malloc (vg\_replace\_malloc.c:447)
==2469==    by 0x4001211: person\_new 
==2469==    by 0x40012FA: main
==2469==
==2469== LEAK SUMMARY:
==2469==    definitely lost: 6 bytes in 1 blocks
==2469==    indirectly lost: 0 bytes in 0 blocks
==2469==      possibly lost: 0 bytes in 0 blocks
==2469==    still reachable: 0 bytes in 0 blocks
==2469==         suppressed: 0 bytes in 0 blocks
==2469==
==2469== For lists of detected and suppressed errors, rerun with: -s
==2469== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

# Summary
Valgrind reports one memory leak in heap\_example.c, 6 byte block allocated inside person\_new() is lost. Meaning the program allocated memory for a peron's name field (alice) but later freed the person struct without freeing the associated name string (alice-\>name). The program calls person\_free\_partial(alice), only frees the struct and not dynamically allocated name. Result is the pointer to alice's name becomes unreachable, Valgrind classifies this as lost leak sue to lost ownsership. Bob's memort is freed correctly in person\_free\_full(bob), no leak occurs. This is a consequence of freeing the struct while abandoning its internal heap allocation.

- - -

# Project: aliasing\_example.c

# Valgrind Output:
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./aliasing\_example
==2527== Memcheck, a memory error detector
==2527== Copyright (C) 2002-2024, and GNU GPL'd, by Julian Seward et al.
==2527== Using Valgrind-3.26.0 and LibVEX; rerun with -h for copyright info
==2527== Command: ./aliasing\_example
==2527==
aliasing\_example: aliasing and use-after-free (Valgrind should report it)
  a=0x4a90480 b=0x4a90480 a[2]=22 b[2]=22
  after free(a): b=0x4a90480 (dangling)
==2527== Invalid read of size 4
==2527==    at 0x40012F2: main 
==2527==  Address 0x4a90488 is 8 bytes inside a block of size 20 free'd
==2527==    at 0x48538BF: free (vg\_replace\_malloc.c:990)
==2527==    by 0x40012CE: main 
==2527==  Block was alloc'd at
==2527==    at 0x4850858: malloc (vg\_replace\_malloc.c:447)
==2527==    by 0x40011E4: make\_numbers
==2527==    by 0x4001272: main 
==2527==
  reading b[2]=22
==2527== Invalid write of size 4
==2527==    at 0x4001312: main 
==2527==  Address 0x4a9048c is 12 bytes inside a block of size 20 free'd
==2527==    at 0x48538BF: free (vg\_replace\_malloc.c:990)
==2527==    by 0x40012CE: main 
==2527==  Block was alloc'd at
==2527==    at 0x4850858: malloc (vg\_replace\_malloc.c:447)
==2527==    by 0x40011E4: make\_numbers
==2527==    by 0x4001272:
==2527==
==2527== Invalid read of size 4
==2527==    at 0x4001320: main 
==2527==  Address 0x4a9048c is 12 bytes inside a block of size 20 free'd
==2527==    at 0x48538BF: free (vg\_replace\_malloc.c:990)
==2527==    by 0x40012CE: main 
==2527==  Block was alloc'd at
==2527==    at 0x4850858: malloc (vg\_replace\_malloc.c:447)
==2527==    by 0x40011E4: make\_numbers 
==2527==    by 0x4001272: main 
==2527==
  wrote b[3]=1234
==2527==
==2527== HEAP SUMMARY:
==2527==     in use at exit: 0 bytes in 0 blocks
==2527==   total heap usage: 2 allocs, 2 frees, 1,044 bytes allocated
==2527==
==2527== All heap blocks were freed -- no leaks are possible
==2527==
==2527== For lists of detected and suppressed errors, rerun with: -s
==2527== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)

# Sumamry
Valgrind reports 3 errors in aliasing\_exaple.c. All caused by use after free triggered by pointer aliasing. Array returned by make\_numbers() is allocated once, both a /b point to the same heap block. When free(a) is called, memory is released, leaving b as a dangling pointer. Becomes an invalid reas or write block that had already been freed. Valgrind identifies this as operation on memory whos life has ended. The memory object involed is 20-byte heap block allocated in make\_numbers().

- - - 

# Project: crash\_example.c

# Valgrind Output:
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./crash\_example
==2642== Memcheck, a memory error detector
==2642== Copyright (C) 2002-2024, and GNU GPL'd, by Julian Seward et al.
==2642== Using Valgrind-3.26.0 and LibVEX; rerun with -h for copyright info
==2642== Command: ./crash\_example
==2642==
crash\_example: deterministic NULL dereference (segmentation fault)
  requesting n=0
==2642== Invalid write of size 4
==2642==    at 0x400128A: main 
==2642==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==2642==
==2642==
==2642== Process terminating with default action of signal 11 (SIGSEGV)
==2642==  Access not within mapped region at address 0x0
==2642==    at 0x400128A: main 
==2642==  If you believe this happened as a result of a stack
==2642==  overflow in your program's main thread (unlikely but
==2642==  possible), you can try to increase the size of the
==2642==  main thread stack using the --main-stacksize= flag.
==2642==  The main thread stack size used in this run was 8388608.
==2642==
==2642== HEAP SUMMARY:
==2642==     in use at exit: 1,024 bytes in 1 blocks
==2642==   total heap usage: 1 allocs, 0 frees, 1,024 bytes allocated
==2642==
==2642== 1,024 bytes in 1 blocks are still reachable in loss record 1 of 1
==2642==    at 0x4850858: malloc (vg\_replace\_malloc.c:447)
==2642==    by 0x48F7C8B: _IO_file_doallocate (filedoalloc.c:91)
==2642==    by 0x4909205: _IO_doallocbuf (genops.c:373)
==2642==    by 0x49068B8: _IO_file_overflow@@GLIBC_2.2.5 (fileops.c:779)
==2642==    by 0x49074B2: _IO_new_file_xsputn (fileops.c:1305)
==2642==    by 0x49074B2: _IO_file_xsputn@@GLIBC_2.2.5 (fileops.c:1258)
==2642==    by 0x48FAB59: puts (ioputs.c:40)
==2642==    by 0x400125E: main 
==2642==
==2642== LEAK SUMMARY:
==2642==    definitely lost: 0 bytes in 0 blocks
==2642==    indirectly lost: 0 bytes in 0 blocks
==2642==      possibly lost: 0 bytes in 0 blocks
==2642==    still reachable: 1,024 bytes in 1 blocks
==2642==         suppressed: 0 bytes in 0 blocks
==2642==
==2642== For lists of detected and suppressed errors, rerun with: -s
==2642== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)
Segmentation fault         valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./crash_example

# Summary
Valgrind is reporting a single critical error in crash\_example.c. Invalid write to address 0x0, which is NULL-pointer dereference. Program requests n = 0, then attempts to write arr[0] even though arr is set to NULL. This causes a segmentation fault. Memory object involved is not a heap block but NULL pointer to itself. This is a violation of memort lifetime rules because the program is attempting to access memory that was never allocated, cannt be legally deferenced. Valgrind reports still reachable 1024-byte block, which is internal buffer allocated by puts() and not a leak caused by the program.

* All AI examples are shown in pervious file memory_maps.md
