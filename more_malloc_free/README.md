0-malloc\_checked.c:
allocates memory using malloc.
pointer = malloc - asking malloc for bytes (b)
if statement - malloc fails, returns to NULL
exit(98) - instead of returning NULL, terminates entire program
return (pointer) - if allocation succeeds, return pointer

1-string\_nconcat.c:
concatenates two strings.
If either s1, s2 NULL, trated as empty string. Added length to s1, counts characters in s1 and adds them to length. length = length(s1) + n - total number of characters to store. Allocated memory +1 for the NULL terminator. Length becomes position inside new string with length = 0. Copied every character of s1 into concat, moving write position forward. Program copies n bytes of s2. Loop stops when reaching end of s1 or the bytes of n have been copied. Returns the string (concat). Output prints characters Best School.

2-calloc.c:
allocates memory for an array, using malloc.
if nmemb/size is 0 - returns NULL. Allocates memory with malloc(nmem * size). Loop through each byte and sets it to 0. Returns pointer to the 0 memory block.

3-array\_range.c:
creates array of integers.
calling a = array\_range(0, 10). Function checks if min is greater than max if not continues. Calculates number of integers required, array will contain 11 integers. size = 10 - 0 + 1. Allocates memory requied and gives space for a[0] - a[10]. For loop fills array and becomes 0-10. Prints output in hexadeimal 0 = 0x00, 1 = 0x01 to 10 = 0x0a.
