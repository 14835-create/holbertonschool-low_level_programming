# C - Doubly linked lists
In this project from Holberton School I learnt how to use doubly linked lists.

## Learning Objectives 🧠
- Whar is a doubly linked list
- How to use doubly linked lists
- Start to look for the right source of information without too much help

## Header file 📁
[lists.h](./lists.h): Header file containing all definitions and prototypes.

## Project File Table 📁
The following files are included in this project:

| File     | Description |
|----------|-------------|
| 0-print\_dlistint.c | Write a function that prints all elements of a dlistint\_t lsit |
| 1-dlistint\_len.c | Write a function that returns the number of elements linked dlistint\_t list  |
| 2-add\_dnodeint.c | Write a function that adds a new node at the beginning of a dlistint\_t list. |
| 3-add\_dnodeint\_end.c | Write a function that adds new node at the end of dlistint\_t list |
| 4-free\_dlistint.c | Write a function that frees a dilistint\_t list |
| 5-get\_dnodeint.c | Write a function that returns the nth node of a dlistint\_t linked list |
| 6-sum\_dlistint.c | Write a function that returns the sum of all data (n) of a dlistint\_t linked list |
| 7-insert\_dnodeint.c | Write a function that inserts a new node at a given position|
| 8-delete\_dnodeint.c | Write a function that deletes the node at index index of a dlistint\_t linked list |

## Tasks 🧩
There is 9 tasks in total, all betty compliant:

1. [0-print\_dlistint.c](./0-print_dlistint.c): Function loops through doubly linked list and prints each node's number, until reaches end.
compiled with:  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print\_dlistint.c -o a
results: 
9
8
-> 2 elements

2. [1-dlistint\_len.c](./1-dlistint_len.c): Program counts how many nodes in list by looping through each node and incrementing a counter until reaches end.
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-dlistint\_len.c -o b
results:
-> 2 elements

3. [2-add\_dnodeint.c](./2-add_dnodeint.c): Function creates new node and inserts at start of list, updating old head's prev pointer and making new node the head.
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add\_dnodeint.c 0-print\_dlistint.c -o c
results:
1024
402
98
4
3
2
1
0

4. [3-add\_dnodeint\_end.c](./3-add_dnodeint_end.c): Program allocates new node, returns it as head if list empty. Otherwise walks to last node and attaches new one.
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add\_dnodeint\_end.c 0-print\_dlistint.c -o d
results:
0
1
2
3
4
98
402
1024

5. [4-free\_dlistint.c](./4-free_dlistint.c): Function walks through list. Tmp stores next node before freeing current. Proceeds to move head foward, loop ending when head becomes NULL.
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-add\_dnodeint\_end.c 0-print\_dlistint.c 4-free\_dlistint.c -o e
results:
==4197== HEAP SUMMARY:
==4197==     in use at exit: 0 bytes in 0 blocks
==4197==   total heap usage: 9 allocs, 9 frees, 1,216 bytes allocated
==4197== 
==4197== All heap blocks were freed -- no leaks are possible
==4197== 
==4197== For counts of detected and suppressed errors, rerun with: -v
==4197== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)


6. [5-get\_dnodeint.c](./5-get_dnodeint.c): Function starts at head, walks through the list. Proceeds to count nodes until counter matches index, id found return node if end return NULL.
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 3-add\_dnodeint\_end.c 0-print\_dlistint.c 4-free\_dlistint.c 5-get\_dnodeint.c -o h
results:
0
1
2
3
4
98
402
1024
98

7. [6-sum\_dlistint.c](./6-sum_dlistint.c): Function walks through each node, adds each nodes n value to total. Stops when head = NULL and returns final sum.
compiled with: gcc -Wall -pedantic -Werror -Wextra 6-main.c -std=gnu89 3-add\_dnodeint\_end.c 4-free\_dlistint.c 6-sum\_dlistint.c -o i
results:
sum = 1534

8. [7-insert\_dnodeint.c](./7-insert_dnodeint.c): Function adds new node at index list. If index 0 = inserts beginning. Index at end = uses end insert. Index is middle links new node between existing nodes. If index doesn't exist = NULL.
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 2-add\_dnodeint.c 3-add\_dnodeint\_end.c 0-print\_dlistint.c 4-free\_dlistint.c 7-insert\_dnodeint.c -o j
results:
0
1
2
3
4
98
402
1024

-----------------
0
1
2
3
4
4096
98
402
1024

9. [8-delete\_dnodeint.c](./8-delete_dnodeint.c): Function removes node at specific index in list. Index = 0 deletes head and updates new heads prev. Index = middle/end unlinks node by recommecting prev/next. Index doesn't exist = exit -1. If deleting works out returns 1.
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 3-add\_dnodeint\_end.c 0-print\_dlistint.c 4-free\_dlistint.c 8-delete\_dnodeint.c -o k
results:
0
1
2
3
4
98
402
1024

-----------------
0
1
2
3
4
402
1024

-----------------
1
2
3
4
402
1024

-----------------
2
3
4
402
1024

-----------------
3
4
402
1024

-----------------
4
402
1024

-----------------
402
1024

-----------------
1024

-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
