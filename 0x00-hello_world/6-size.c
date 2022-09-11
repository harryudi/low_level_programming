#include <stdio.h>

/**
 * main - containing the function
 * Return: 0 if no error
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of an long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of an long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of an float: %ld byte(s)\n", sizeof(float));
	return (0);
}
