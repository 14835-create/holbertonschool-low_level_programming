0-malloc\_checked.c:
allocates memory using malloc.
pointer = malloc - asking malloc for bytes (b)
if statement - malloc fails, returns to NULL
exit(98) - instead of returning NULL, terminates entire program
return (pointer) - if allocation succeeds, return pointer


