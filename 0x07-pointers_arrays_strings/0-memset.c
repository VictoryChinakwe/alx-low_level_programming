#include "main.h"
#include <stdio.h>
/**
*_memset()This is a function that fills memory with a constant byte
*
*@n: This function fills the first n bytes of the memory
*@s: This is a bytes of the memory area pointed to by s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int number = 1;
while (number < n)
{
s[number] = b;
number++;
}
return (s);
}
