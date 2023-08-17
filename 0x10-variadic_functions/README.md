## 0x10. C - Variadic function
This directory contains useful variadic functions.
and gives you examples where variadic function is useful

## --------------- Funcitons prototypes are here -------------------- ##
```int sum_them_all(const unsigned int n, ...);```
This is a function that calculate the sum of all of its arguments

```void print_numbers(const char *separator, const unsigned int n, ...);```
a function that prints numbers, followed by a new line.
where separator is the string to be printed between numbers
and n is the number of integers passed to the function

```void print_strings(const char *separator, const unsigned int n, ...);```
a function that prints strings, followed by a new line.
where separator is the string to be printed between the strings
and n is the number of strings passed to the function

```void print_all(const char * const format, ...);```
where format is a list of types of arguments passed to the function

