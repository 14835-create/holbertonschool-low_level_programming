# Crash explained
The program terminates immediately with segmentation fault after printing "requesting n=0". Valgrind confirms an invalid write to address 0x0, meaning the program attempted to deference NULL pointer (invalid). Crash occurs every time program is run with n = 0.

# Analysis
The crash is caused by writing arr[0] when arr is NULL program sets arr = NULL. When n = 0, but still performs arr[0] =  1234. Because arr does not point to any valid memort stack, heap or global, this writes the address of 0x0 which is invalid.

NULL is not a valid memory object. Does not refer to stack/heap memory. Attempting to write arr[0] is the same as writing address 0x0, proteted by OS. This violates memory lifetime riles. The program is dereferencing a pointer that never has a life at all. The segmentation fault is undefined behaviour. 

# AI
The AI tool suggested that the crash was caused by "writing past the end of an allocated array" , implying buffer overflow. This explanation is incorrect because the program does not allocate an array when n = 0. Instead it sets the pointer to NULL. Therefore, the failure is a NULL pointer dereference not a buffer overflow.
