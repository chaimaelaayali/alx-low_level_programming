#include "main.h"

/**
 * _strlen_recursion - Calculate the length of a string
 * @s: The string to count
 *
 * Return: Always integer value
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}

s++;
Return (_strlen_recursion(s) + 1);
}
