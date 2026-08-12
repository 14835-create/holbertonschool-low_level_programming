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
|           |
|          | |
|          | |

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

3. [](): 
