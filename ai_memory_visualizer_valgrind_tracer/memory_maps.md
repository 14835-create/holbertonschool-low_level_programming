# Program: stack\_example.c

# Overview
The program demonstrates how recursive calls create new stack frames. Each fram contains its own independent copies of:
- local\_int
- local\_buf[16]
- marker
- p\_local : Pointer to local\_int

The printed addresses show how the stack growns downward:
deeper recursion -> lower memory addresses.

# Key execution points

Memory Map:
- Depth 0: enter
- Depth 1: enter
- Depth 2: enter
- Depth 3: enter
- Same frames during exit (3, 2, 1, 0)

## Memory Map Table

# Depth 0 - Enter:
- Topmost frame
- All variables live until Depth 0 returns

| Variable     | Address                  | Value   | Notes                     |
|--------------|---------------------------|---------|---------------------------|
| local\_int    | 0x000000BA58DFF8E4        | 100     | Independent per frame     |
| local\_buf    | 0x000000BA58DFF8D0        | "A..."  | First character = 'A'     |
| marker       | 0x000000BA58DFF92C        | 0       | Depth * 10                |
| p\_local      | 0x000000BA58DFF8E4        | local\_int | Points to local\_int |

---

# Depth 1 - Enter:
- Addresses lower than depth 0 - stack grows downward
- Depth 0 fram still exists beneath

| Variable     | Address                  | Value   | Notes                     |
|--------------|---------------------------|---------|---------------------------|
| local\_int    | 0x000000BA58DFF8A4        | 101     | Lower address than depth 0 |
| local\_buf    | 0x000000BA58DFF890        | "B..."  | First character = 'B'     |
| marker       | 0x000000BA58DFF8EC        | 10      | Depth * 10                |
| p\_local      | 0x000000BA58DFF8A4        | local\_int | Points to local\_int |

---

# Depth 2 - Enter:
- Depth 0/1 frames still exist

| Variable     | Address                  | Value   | Notes                     |
|--------------|---------------------------|---------|---------------------------|
| local\_int    | 0x000000BA58DFF864        | 102     | Lower address than depth 1 |
| local\_buf    | 0x000000BA58DFF850        | "C..."  | First character = 'C'     |
| marker       | 0x000000BA58DFF8AC        | 20      | Depth * 10                |
| p\_local      | 0x000000BA58DFF864     | local\_int | Points to local\_int |

---

# Depth 3 - Enter:
- Deepest frame
- All four frames exist at the same time

| Variable     | Address                  | Value   | Notes                     |
|--------------|---------------------------|---------|---------------------------|
| local\_int    | 0x000000BA58DFF824        | 103     | Lowest address (deepest)  |
| local\_buf    | 0x000000BA58DFF810        | "D..."  | First character = 'D'     |
| marker       | 0x000000BA58DFF86C        | 30      | Depth * 10                |
| p\_local      | 0x000000BA58DFF824   | local\_int | Points to local\_int   

## Stack frame Lifetimes:
| Depth | Frame Exists During | Destroyed When |
|------|----------------------|----------------|
| 0     | Entire recursion     | Final return   |
| 1     | Depth 1-3            | After depth 1 exit |
| 2     | Depth 2-3            | After depth 2 exit |
| 3     | Only depth 3         | Immediately after depth 3 exit |

Frame removed:
- local\_int / local\_buf / marker cease to exist
- p\_local becomes invalid
- Any pointer these locals becomes a dangling pointer

## Pointer Aliasing
No aliasing between frames
Each p\_local points to local\_int inside its own frame:
- Every address is different:

|Depth | Address |
|------|---------|
| 0    | 0x...F8E4 |
| 1    | 0X...F8A4 |
| 2    | 0X...F864 |
| 3    | 0X...F824 |

# Summary
Program shows how recursion creates a new stack frame at each depth. Every frame contains independent copies of local\_int , locao\_buf , marker and p\_local. Printed output shows how deeper recursion places stack variables at lower memory addresses, proving that each call has its own seperate frame. When recursion reaches max depth, the function unwinds and prints the same variables again during exit. This shows that frames are destroyed in reverse order (3, 2, 1, 0). Shows how stack frames are created, and how they hold their own local variables and how the variables go once frame returns.

## AI Mistake / Correction

# AI claim
"All recursive calls share the same local\_int and local\_buf, because recursion reuses the same stack frame."

# Why AIs claim is wrong
- All printed addresses show each depth having different local\_int / local\_buf addresses
- Stack grows downward, deeper recursion levels have lower addresses.
- Frames do not share locals, each cell had its own frame.

# My Correction
- Every recursion level has its own independent local\_int / local\_buf / marker.
- p\_local points to local\_int in its own frame.
- When frames exit, locals are destroyed and any pointer to them becomes a dangling pointer.

- - - 

## Program: aliasing\_example.c

# Overview
The program demonstrates heap allocation, pointer aliasing and use after free.
Two pointer 'a' / 'b' are made to point to the same heap block.
When 'a' is freed, heap block is destroyed - but 'b' still holds old address in turn becoming a dangling pointer.
Any read or write through 'b' after free(a) becomes undefined behaviour and leads to memory corruption/segmentation fault.

# Run Output

a=000002CAB7B17590 b=000002CAB7B17590 a[2]=22 b[2]=22
after free(a): b=000002CAB7B17590 (dangling)
reading b[2]=-1213136560
wrote b[3]=1234
Segmentation fault

# Heap allocation
make\_numbers(5):
Allocates 5 integers and initalizes them.

| Index | Value |
|-------|-------|
| 0     | 0     |
| 1     | 11    |
| 2     | 22    |
| 3     | 33    |
| 4     | 44    |

# Pointer aliasing map
Both pointers refer the same memory: b = a;

|Pointer | Address          | Points to |
|--------|------------------|-----------|
| a      | 0x000002CAB7B17590 | heap block |
| b      | 0x000002CAB7B17590 | alias - same heap block |

# Free heap block
After: free(a)
a/b becomes invalid but b becomes dangling

|Pointer | Address          | Points to |
|--------|------------------|-----------|
| a      | 0x000002CAB7B17590 | free    |
| b      | 0x000002CAB7B17590 | free    |

# Use after free (invalid read)
Program output prints: reading b[2] = -1213136560;

The garabage value indicates memory was freed and reading from it is undefined behvaiour.

# Use after free (invalid write)
The program output writes: b[3] = 1234;

This corrupts freed memory and causes a segmentation fault.

# Summary
Program crashes cause a/b point to same heap block, block is freed through a. After free(a) call, b becomes a dangling pointer that still holds the old address. Despite the memory being no longer valid. When the program reading b[2], prints garbage values because the memory had already been freed. When b[3] = 1234 writes, attempts to modify freed memory which corrupts allocator internal data and causes the segmentation fault that occurs when ran. The crash is a result of using pointer b after the memory refers to has been freed.

## AI Mistake / Correction

# AI claim
"Freeing 'a' does not affect 'b' because they are seperate pointers."

# Why AIs claim is wrong
- 'b' is alias of 'a' both are holding the same address
- freeing 'a' destroys the heap block
- 'b' becomes a dangling pointer
- garbage value/segmentation fault show memory was freed

# My Correction
- b = a both pointers reference the same heap block
- free(a) frees that block, including b
- any read/write through 'b' after free(a) becomes undefined behaviour 

- - -

## Program: heap\_example.c

# Overview
The program demonstrated heap allocation of structs
- allocating two seperate structs (person) - alice and bob
- allocating heap memory for each name field
- stores values inside each struct
- freeing only part of alice(name) where bob is completly freed

# Run Output
heap\_example: allocations and a deliberate leak
  alice=000001D9ADC27580 name=000001D9ADC275A0 age=30
  bob=000001D9ADC275C0 name=000001D9ADC275E0 age=41

# Heap allocation
Alice:

|              | Address           | Notes |
|--------------|-------------------|-------|
| Alice struct | 0x000001D9ADC27580 | Heap block contraining name, age |
| Name         | 0x000001D9ADC275A0 | Seperate heap allocation for string |
| Age          | Stores inside struct | Value = 30 |

Bob:

|              | Address           | Notes |
|--------------|-------------------|-------|
| Bob struct | 0x000001D9ADC275C0 | Independant heap block |
| Name         | 0x000001D9ADC275E0 | Seperate heap allocation |
| Age         | Stores inside struct | Value = 41 |

# Free
- Bob is freed correctly: free(bob-\>name) , free(bob) , no leaks are present
- Alice is only part freed: person\_free\_partial(alice) - frees struct only
- alice-\>name becomes unreachable = memory leak

# Summary
No aliasing is occuring, all heap blocks remain indepedent. Bob's struct and name are freed correctly. Alice's struct is freed but her name is not causing a memory leak.

## AI Mistake / Correction

# AI claim
"Alice and Bob both leak memory because neither struct is freed."

# Why AIs claim is wrong
The program does free bob correctly with : free(bob-\>name) , free(bob) = no leaks
Alice is freed using person\_name\_partial(), which only frees the struct and not alice-\>name. Alice's name string is still allocated with no pointer referencing it = memory leak.

- - -

## Program: crah\_example.c

# Overview
The program performs a NULL pointer dereference, causing a segmentation fault. Showing what happens when a function returns NULL and the caller deferences it.

# Run Output
crash\_example: deterministic NULL dereference (segmentation fault)
  requesting n=0
Segmentation fault

# Summary
Crash occurs because allocate\_numbers(0) returns NULL and the code attempts to writeto nums[0]. Becuase nums is NULL the programs attempts to access memory at the address of 0x0 (invalid). This causes the OS to stop the program and show a regmentation fault.

- - -

## Program: crash\_example.c

# Overview
The program demonstrates how a NULL pointer deference causes a crash. 

# Run Output
crash\_example: deterministic NULL dereference (segmentation fault)
  requesting n=0
Segmentation fault

# Memory map
Pointer state:

| Pointer | Address | Points To | Valid? | Notes |
| --- | --- | --- | --- | --- |
| nums | 0x0 | NULL |  no | Returned because n=0 |

Deference attempt:

| Operation | Target Address | Valid? | Result |
| --- | --- | --- | --- |
| ``nums[0] ``= ``42`` | 0x0 |  no | Segmentation fault |

# Summary
Table: 

| Object | Created At | Destroyed At | Valid During | Invalid After |
| --- | --- | --- | --- | --- |
| nums | declaration | end of scope | never valid (NULL) | always invalid |

Because n set to 0, function allocate\_numbers() returns NULL instead of allocating an array. The main() functions does not check this return value and directly performs nums[0] = 42. This attempts to write to memory address of 0x0 (invalid). OS stops program and shows segmentation fault. There is no heap memory allocaed, no arrays exist.Program crashes because the cofe deferences a NULL pointer.

## AI Mistake / Correction

# Why AIs claim is wrong
The program deferences the NULL pointer. Nums is NULL and nums[0] = 42 attempts to write the address of 0x0 (invalid) and causes the segmentation fault.
