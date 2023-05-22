#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry points
 *
 * Description: prints out the last part of a quote in the standard error.
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(3, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
