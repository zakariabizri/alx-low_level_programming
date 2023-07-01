#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char pass[100];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = ' ' + rand() % ('~' - ' ');
		sum += pass[i];
		putchar(pass[i]);
		if ((2772 - sum) <= '~' - ' ')
		{
			n = 2772 - sum;
			sum += n;
			putchar(n);
			break;
		}
	}

	return (0);
}

