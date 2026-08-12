# C - Hash tables
In this project from Hholberton School I learnt how to use hash tables.

## Learning Objectives 🧠
- What is a hash function
- What makes a good hash function
- What is a hash table, how do they work and how to use them
- What is a colission and what are the main ways of dealing with colissions in the context of a hash table
- What are the advantages and drawbacks of using hash tables
- What are the most common use cases of hash tables

## Header file 📁
[hash\_tables.h](./hash_tables.h): Header file containing all definitions and prototypes for all projects.

## Project File Table 📁
The following files are included in this project:

| File     | Description |
|----------|-------------|
| 0-hash\_table\_create.c | Write a function that creates a has table |
| 1-djb2.c  | Write a hash function implementing the djd2 algorithm |
| 2-key\_index.c | Write a function that gives you the infex of a key |
| 3-hash\_table\_set.c | Write a function that adds an element to the hash table |
| 4-hash\_table\_get.c | Write a function that retrieves value associated with a key |
| 5-hash\_table\_print.c | Write a function that prints a hash table |
| 6-hash\_table\_delete.c | Write a function that deletes a hash table |

## Tasks 🧩
There is 7 tasks in total, all betty compliant:

1.[0-hash\_table\_create.c](./0-hash_table_create.c): Function allocats new hash table, initializes its size and creates array of empty buckets using calloc. Returns the prepared tables or NULL.
compiled with/valgrind checked: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-hash\_table\_create.c -o a
results:
0x238a010

2. [2-key\_index.c](./2-key_index.c): Function starting at base number 5381, goes through each character in the string. Every character is multiplied by current hash value by 33 and adds ASCII value of character. Final hash value returned.
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-djb2.c -o b
results:
6953392314605
3749890792216096085
5861846

3. [2-key\_index.c](./2-key_index.c): Function takes key/size of the hash tables array. Uses djb2 hash function to turn key into large number. Uses the modulo op to shrink number to fit in array. Result is the indez where key/value pair stored.
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 1-djb2.c 2-key\_index.c -o c
results:
6953392314605
237
3749890792216096085
341
5861846
470

4. [3-hash\_table\_set.c](./3-hash_table_set.c): Function stores key/value in hash table. Calculates index for key, checks if key already exists. Updates the value if it does. If key is new, creates new node and inserts it at start of linked list at index. Returns 1 suzzess otherwise fail at 0.
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 0-hash\_table\_create.c 1-djb2.c 2-key\_index.c 3-hash\_table\_set.c -o d

5. [4-hash\_table\_get.c](./4-hash_table_get.c): Function looks up key on hash table. Walks through the linked list at index. If node found with matching key, returns the stored value, otherwise NULL.
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 0-hash\_table\_create.c 1-djb2.c 2-key\_index.c 3-hash\_table\_set.c 4-hash\_table\_get.c -o e
results:
python:awesome
Bob:and Kris love asm
N:queens
Asterix:Obelix
Betty:Cool
98:Battery Street
c:isfun
javascript:(null)

6. [5-hash\_table\_print.c](./5-hash_table_print.c): Function prints key/value pairs in hash table. Loops through array each index. Prints every node in linked list at that position. Prints in order of array.
compiled with: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 0-hash\_table\_create.c 1-djb2.c 2-key\_index.c 3-hash\_table\_set.c 4-hash\_table\_get.c 5-hash\_table\_print.c -o f
results:
{}
{'Betty': 'Cool', 'python': 'awesome', '98': 'Battery Street', 'N': 'queens', 'c': 'fun', 'Bob': 'and Kris love asm', 'Asterix': 'Obelix'}

7. [6-hash\_table\_delete.c](./6-hash_table_delete.c): Function deletes entire hash table. Loops through each index, freeing every node in linked list. 
compiled/valgrind with: gcc -Wall -pedantic -Werror -Wextra 6-main.c 0-hash\_table\_create.c 1-djb2.c 2-key\_index.c 3-hash\_table\_set.c 4-hash\_table\_get.c 5-hash\_table\_print.c 6-hash\_table\_delete.c -o g
