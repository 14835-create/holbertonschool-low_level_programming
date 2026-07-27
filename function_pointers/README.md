# C - Function pointers
In this project from Holberton School, I learnt about using function pointers in C programming.

## Learning Objectives 🧠
- What are function pointers and how to use them
- What does a function pointer exactly hold
- Where does a function pointer print to in the virtual memory
 
## Header file 📁
[function\_pointers.c](./function_pointers.h): Header file containing all definitions and prototypes for all projects and functions written in function pointers.

## Project File Table 📁
The following files are included in this project:

| File     | Description |
|----------|-------------|
| function\_pointers.c | Entry point for programs |
| 0-print\_name.c | Function that prints a name |
| 1-array\_iterator.c | Executes a function given as parameter |
| 2-int\_index.c | Function that searches for an integer |
| 3-main.c, 3-op\_functions.c, 3-calc.h, 3-get\_op\_func.c | Program that performs simple operations |

## Tasks 🧩
There is 4 tasks in total, all betty compliant:

1. [0-print\_name.c](./0-print_name.c): Function that prints name Bob.
Hello, my name is Bob
Hello, my uppercase name is BOB DYLAN
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print\_name.c -o a

2. [1-array\_iterator.c](./1-array_iterator.c): function that executes a function given as a parameter on each element of an array.
results printed:
0
98
402
1024
4096
0x0
0x62
0x192
0x400
0x1000
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-array\_iterator.c -o b

3. [2-int\_index.c](./2-int_index.c): function that searches for an integer.
results:
2
1
2
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-int\_index.c -o 

4. [3-main.c](./3-main.c): Calculator program - runs calculator program
- reads command line arguments
- converts numbers (atoi)
- validates operator
- checks div/mod by 0
- calls correct function using pointer returned (get\_op\_func)
- prints

[3-op\_functions.c](./3-op_functions.c): Math functions - implements math operations
- op\add : addition
- op\_sub : subtraction
- op\_mul : multiplication
- op\_div : division
- op\_mod : modulo

[3-get\_op\_func.c](./3-get_op_func.c): Operator selector - chooses correct math function
- look at operator string
- search through ops[]
- return correct function pointer (eg. op\_add)

[3-calc.h](./3-calc.h): Header file - defines function prote/structs
- decalres what other files require
- op\_t struct
- proto for all arithmetic functions
- proto for get\_op\_func

compiled files with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op\_functions.c 3-get\_op\_func.c -o calc
Results:

| Test | Result |
|------|--------|
| ./calc 1 + 1 | 2 |
| ./calc 97 + 1 | 98 |
| ./calc 1024 / 10 | 102 |
| ./calc 1024 '*' 98 | 100352 |
| ./calc 1024 - 98 | Error |
| ./calc 1024 '%' 98 | 44 |
