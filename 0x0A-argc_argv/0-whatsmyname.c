#include <stdio.h>
/**
 * main - program prints its own name, followed by a new line.
 * @argc: count of the number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - successful run
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
