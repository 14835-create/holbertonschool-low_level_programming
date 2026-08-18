# C - File I/O
In this project from Holberton School I learnt how to use the file I/O system calls.

## Learning Objectives 🧠
- Look for the right source of information online
- How to create, open, close, read and write files
- What are file descriptors
- What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
- How to use the I/O system calls open, close, read and write
- What are and how to use the flags O\_RDONLY, O\_WRONLY, O\_RDWR
- What are file permissions, and how to set them when creating a file with the open system call
- What is a system call
- What is the difference between a function and a system call

## Header file  📁
[main.h](./main.g): Header file containing all definitions and prototypes for all projects.

## Project File Table 📁
The following files are included in this project:

| File | Description |
| ---- | ----------- |
| 0-read\_textfile.c | Write a function that reads a text file and prints it to the POSIX standard output |
| 1-create\_file.c | Create a function that creates a file|
| 2-append\_text\_to\_file.c | Write a function that appends text at end of a file |
|      |             |
|      |             |

## Tasks  🧩
There is 4 tasks in total, all betty compliant:

1. [0-read\_textfile.c](./0-read_textfile.c): Function opens the file in read only mode. Allocates buffer to size of letters. Reads letters bytes from the file. Writes bytes to STDOUT\_FILNO. Returns the number of bytes written otherwise returns 0 if fails.

2. [1-create\_file.c](./1-create_file.c): Function creates file and writes string into it. File opned using flags. Sets permission to rw when creating file otherwise if file exists perm doesn't change. If NULL, empty file created, if filename NULL function returns -1. Writes full conent of text file when provided. Returns 1 on success otherwise -1 on failure.

3. [2-append\_text\_to\_file.c](./2-append_text_to_file.c): Function appends NULL terminated string to the end of an existing file. File is opened using O\_WRONLY/O\_APPEND. File is not created if it doesn't exist. Returns 1 if file exists otherwise -1 if file doesn't exist. When text conent given the content is appended to the file. Returns 1 on success otherwise -1 on failure.
