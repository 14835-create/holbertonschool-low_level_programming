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
| 3-factorial.c | Write a functions that returns the factorial of a given number |
| 4-pow\_recursion.c | Write a function that returns value of x raised to power of y|| 5-sqrt\_recursion.c | Write a function that returns natural square or root number |

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

4. [3-factorial.c](./3-factorial.c): Write a function that returns the factorial of a given number. Recursive calls and reduces n by 1 until reaches 0. Results multiply together as the call unwinds, giving factorial value.
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-factorial.c -o 3-factorial
results: 
1
120
3628800
-1

5. [4-pow\_recursion.c](./4-pow_recursion.c): Write a function that returns the value of x raised to the power of y. Sorting the base number (x) in variable called result. Result will hold the multiplication as recursion unwinds.
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-pow\_recursion.c -o 4-pow
result:
1
1
65536
25
-1
-125

6. [5-sqrt\_recursion.c](./5-sqrt_recursion.c): Write a functin that returns the natural square root of a number. 
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-sqrt\_recursion.c -o 5-sqrt
result:
1
32
4
-1
5
-1
