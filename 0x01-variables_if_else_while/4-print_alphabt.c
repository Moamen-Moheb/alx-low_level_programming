#include <stdio.h>
/**
 * main - print alphabets from a to z.
 *
 * Return: 0 on success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
		if (alphabet == 'q' || alphabet == 'e')
		{
			continue;
		}	
	putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
