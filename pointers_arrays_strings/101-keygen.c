
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random valid password
 *
 * Return: Always 0
 */
int main(void)
{
	int p;
	int sum = 0;

	srand(time(NULL));

	while (sum <= 2645)
	{
		p = (rand() % 95) + 32;

		if (sum + p <= 2740)
		{
			sum += p;
			putchar(p);
		}
	}

	putchar(2772 - sum);
	putchar('\n');

	return (0);
}

