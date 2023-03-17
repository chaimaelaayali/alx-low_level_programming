#include<stdio.h>

/**
 * main -Print out a string to stdout.
 *
 * Return: 0
 */

int main(void)
{
	printf("size of char: %lu byte(s)", sizeof(char));
	printf("size of an int: %lu byte(s)", sizeof(int));
	printf("size of a long int: %lu byte(s)", sizeof(long int));
	printf("size of a clong long int: %lu byte(s)", sizeof(long long int));
	printf("size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
