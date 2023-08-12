#include <stdio.h>
/**
 * main - print numbers from 00 to 99.
 *
 * Return: 0 on success
 */
int main()
{
    char digit[4];
    int i;
    int j;
    int k;

    for (i = 0; i < 8; i++)
    {
        for (j = i + 1; j < 9; j++)
        {
            for (k = j + 1; k < 10; k++)
            {
                digit[0] = i + '0';
                digit[1] = j + '0';
                digit[2] = k + '0';
                digit[3] = '\0';
                printf("%s\n", digit);
            }
        }
    }

    return 0;
}
