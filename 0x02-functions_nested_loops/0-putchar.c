#include "main.h"
/**
 * main - Print "_putchar" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
	char putchar1[] = "_putchar";
	int i = 0;

	while (putchar1[i] != '\0')
	{
		_putchar(putchar1[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
