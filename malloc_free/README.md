0-create\_array.c:
creates array of char, intializes it with specific char. size = 98 times to print the value of c = 'H' in the ASCII table. ASCII table value = 0x48 printed 98 times. Free space of memory for size and arr == NULL to prevent seg error. Compile files and run with ./a - prints 0x48 98 times.
1-strdup.c:
returns pointer to newly allocated space in memory which contains a copy of string given as parameter. String to be duplicated str = "Duplicated". Loop counts characters until hits null terminator. length of string is 10 including '\0'. - 10 characters.
 dup = malloc(sizeof(char) * length + 1)) - size of char = 1 byte times by length = 10 characters + 1 (for the NULL terminator). This equals 11 bytes total for memory to duplicate. dup[i] = str[i]; - copies the string character one by one.
