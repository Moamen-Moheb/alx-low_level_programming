#include <stdio.h>
/**
 * main - print alphabets from a to z.
 *
 * Return: 0 on success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet > 'a' ; alphabet--)
	{
	    putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
