# C - Variadic functions
In this project from Holberton School, I learnt about using variadic functions.

## Learning Objectives 🧠
- What are variadic functions
- How to use va\_start, va\_arg and va\_end macros
- Why and how to use the const type qualifier

## Header file 📁
[variadic\_functions.h](./variadic_functions.h): Header file containing all definitions and prototypes for all projects written in variadic functions. 

## Project File Table 📁
The following files are included in this project:

| File     | Description |
|----------|-------------|
| variadic\_functions.h | Entry point for programs |
| 0-sum\_them\_all.c | Function that returns the sum of all its parameters |
| 1-print\_numbers.c | Function that prints numbers, new line |
| 2-print\_strings.c | Function that prints strings, new line |
| 3-print\_all.c     | Function that prints anything |

## Tasks 🧩
There is 4 tasks in total, all betty compliant:

1. [0-sum\_them\_all.c](./0-sum_them_all.c): function that returns the sum of all its parameters. Returns sym of all integers passed to it or 0 if no sums provided.
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum\_them\_all.c -o a
results: ./a
1122
500

2. [1-print\_numbers.c](./1-print_numbers.c): function that prints numbers, followed by new line. Loops through all integers, prints each one, add separator between them. Prints newline at end.
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print\_numbers.c -o b
results:
0, 98, -1024, 402

3. [2-print\_strings.c](./2-print_strings.c): function that prints strings, followed by a new line. Loops through all strings, prints each one or "(nil)", adds separator between them, prints new line at end.
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print\_strings.c -o c
results: 
Jay, Django

4. [3-print\_all.c](./3-print_all.c): function that prints anything.
Function reads format string one character at a time. For each character, checks a table to see which printing function to use. When match is found, prints the argument using correct function and a ", " as a separator. Prints newline at end.
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-print\_all.c -o d
results:
B, 3, stSchool
