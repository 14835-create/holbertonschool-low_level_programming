# C - Reursion
In this project from Holberton School, I learn about using recursion.

## Learning Objectives 🧠
- What is recursion
- How to implement recursion
- In what situations you should implement recursion
- In what situations you shouldn't implement recursion

## Header file 📁
[main.h](./main.h): header file containing all definitions and prototypes for all projects and functions in [recursion](./recursion)

## Project File Table 📁
The following files are included in this project:

| File     | Description |
|----------|-------------|
| 0-puts\_recursion.c | Write a function that prints a string, followed by new line |
| 1-print\_rev\recursion.c | Write a function that prints a string in reverse |
| 2-strlen\_recursion.c | Write a dunction that returns the length of the string |
|          | |
|          | |

## Tasks 🧩
There is 7 tasks in total, all betty compliant:

1. [0-puts\_recursion.c](./0-puts_recursion.c): Write a function that prints a string, followed by new line. Function prints all characters until string ends, new line.
compiled with:  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 \_putchar.c 0-main.c 0-puts\_recursion.c -o 0-puts\_recursion
result: Puts with recursion

2. [1-print\_rev\_recursion.c](./1-print_rev_recursion.c): Write a dunction that prints a string in reverse. Prints string backwards using recursion. Characters print after recursive call returns, reverses the order.
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 \_putchar.c 1-main.c 1-print\_rev\_recursion.c -o 1-print\_rev\_recursion
result: reklaW notloC

3. [2-strelen\_recursion.c](./2-strlen_recursion.c): Write a function that returns length of a string. Keeps moving forward til it hits '\0'. call returns 0. Prvious calls add 1 values on way back, totaly length of string built.
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89  2-main.c 2-strlen\_recursion.c -o 2-strlen\_recursion
result: 14

4. []():
