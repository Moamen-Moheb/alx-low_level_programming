#include <stdio.h>
/**
 * main - print numbers from 00 to 99.
 *
 * Return: 0 on success
 */
int main()
{
    int digit[2];
    int i;
    int j;
    int k;

    for (i = 0; i < 8; i++)
    {
        for (j = i + 1; j < 9; j++)
        {
            for (k = j + 1; k < 10; k++)
            {
                digit[0] = i;
                digit[1] = j;
                digit[2] = k;
                printf("%d%d%d\n", digit[0],digit[1],digit[2]);
            }
        }
    }

    return 0;
}
