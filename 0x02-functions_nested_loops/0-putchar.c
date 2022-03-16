#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *var = "_putchar";

	while (*var)
	{
		_putchar(*var);
		var++;
	}
	_putchar('\n');

	return (0);
}
