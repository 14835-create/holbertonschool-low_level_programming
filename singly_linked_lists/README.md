# C - Singly linked lists
In this project from Holberton Shcool, I learnt about using linked lists.

## Learning Objectives 🧠 
- When and why using linked lists vs arrays
- How to build and use linked lists

## Header file 📁
[lists.h](./lists.h)

## Project File Table 📁
The following files are included in this project:

| File     | Description |
|----------|-------------|
| 0-print\_list.c | Write a function that prints all the elements of lsit\_t list  |
| 1-list\_len..c | Write a dunction that returns the number of elements in linked list\_t list |
| 2-add\_node.c | Write a function that adds a new node at the beginning of a list\_t list |
|          | |
|          | |

## Tasks 🧩
There is 5 tasks in total, all betty compliant:

1. [0-print\_list.c](./0-print_list.c): Function walks through linked list. Proceeds to print each node's string, counts how many nodes are printed and returns count. Prints nil if missing.
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print\_list.c -o a
results:
[5] Hello
[5] World
-> 2 elements

[0] (nil)
[5] World
-> 2 elements

2. [1-list\_len.c](./1-list_len.c): Starts at the head of list, proceeds to walk through eahc node. Count is incramented and moves to next. Returns total.
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list\_len.c -o b
results:
-> 2 elements

3. [2-add\_node.c](./2-add_node.c): Function creates a new node and duplicates the string. Calculates the length manually, links node to front list, updates head pointer and returns the new node.
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add\_node.c 0-print\_list.c -o c
results:
[3] Zee
[7] William
[7] Tasneem
[6] Steven
[9] Sravanthi
[6] Siphan
[4] Rona
[4] Rick
[4] Rick
[7] Praylin
[5] Mason
[6] Marine
[4] Kris
[7] Josquin
[4] John
[4] John
[3] Joe
[6] Gloria
[7] Electra
[4] Dora
[6] Daniel
[6] Damian
[8] Chandler
[5] Bilal
[7] Bennett
[8] Augustin
[5] Asaia
[9] Alexandro

4. []():

