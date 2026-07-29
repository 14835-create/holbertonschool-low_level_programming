# C - argc, argv
In this project from Holberton School, I learnt about using argc, argv function.

## Learning Objectives 🧠
- How to use arguments passed to your program
- What are two prototypes of main that you know of, and in which case do you use one or the other
- How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters


## Header file 📁
[]()

## Project File Table 📁
The following files are included in this project:

| File     | Description |
|----------|-------------|
| 0-whatsmyname.c | Write a program that prints its name, followed by new line |
| 1-args.c | Write a program that prints numbers of arguments passed to it |
|          | |
|          | |
|          | |

## Tasks ~_
There is 5 tasks in total, all betty compliant:

1. [0-whatsmyname.c](./0-whatsmyname.c): Write a program that prints its name, followed by new line. (void)argc; used to prevent unused variable warnings - keeping prototype intact.
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis

2. [1-args.c](./1-args.c): Write a program that prints the number of arguments passed into it. Prints number, followed by new line. (void)argv; used to prevent unused variable warnings - keeping prototypes intact.
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs


