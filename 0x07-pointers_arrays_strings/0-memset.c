#include "main.h"
#include <stdio.h>

/**
 * my_memset - fills memory with a constant byte
 * @s: pointer to the memory area to fill
 * @b: the byte to fill the memory with
 * @n: number of bytes to fill
 * Return: pointer to the filled memory area (s)
 */
char *my_memset(char *s, char b, unsigned int n)
{
  unsigned int number = 0;
  while (number < n)
  {
    s[number] = b;
    number++;
  }
  return (s);
}
