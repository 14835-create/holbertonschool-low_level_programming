# C - structures, typedef
In this project from holberton School, I learnt about using structs and typedef in C programming.

## Learning Objectives 🧠
- what are structures, when, why and how to use them
- how to use typedef

## Header file 📁
[dog.h](./dog.h): Header file containing all definitions and prototypes for all projects and functions written in [Structures & Typedef](../0x0D-structures_typedef).

## Project File Table 📁
The following files are included in this project:

| File     | Description |
|----------|----------|
| main.c    | Entry point for programs  |
| dog.h    | Struct definition and prototypes  |
| 1-init\_dog.c | Initializes a struct dog |
| 2-print\_dog.c | Prints a struct dog |
| 4-new\_dog.c | Function creates a new dog |
| 5-free\_dog.c | Function the frees dogs | 

## Tasks 🧩
There is 6 tasks in total, all betty compliant:

1. [dog.h](./dog.h): header file defines new type struct dog with the following elements:
- char *name
- float age
- char *owner
- Compiled with gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a

2. [1-init\_dog.c](./1-init_dog.c): Initializes new variable of type struct dog.
- Prototype: void init\_dog(struct dog *d, char *name, float age, char *owner);*
- Compiled with gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init\_dog.c -o b

3. [2-print\_dog.c](./2-print_dog.c): Funtion that prints a struct dog.
- Prototype: void print\_dog(struct dog *d);*
- If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
- If d is NULL print nothing.
- Compiled with gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print\_dog.c -o c

4. [dog.h](./dog.h): Define new type dog\_t as a new name for the type struct dog.
- Compiled with gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d

5. [4-new\_dog.c](./4-new_dog.c): Function that creates a new dog.
- Prototype: dog\_t *new_dog(char *name, float age, char *owner);
- Store copy of name and owner
- Return NULL if function fails
- Compiled with gcc -Wall -pedantic -Werror -Wextra -std=ginu89 4-main.c 4-new_dog.c -o e*

6. [5-free\_dog.c](./5-free_dog.c): Function that frees dogs.
- Prototype: void free\_dog(dog\_t *d);
- Compiled with gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-free_dog.c 4-new_dog.c -o f
