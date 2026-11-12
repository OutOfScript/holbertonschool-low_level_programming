
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a valid password
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int p;
	int q;

	srand(time(NULL));

	p = (rand() % 19) + 72;
	q = 162 - p;

	for (i = 0; i < 29; i++)
		putchar('Z');

	putchar(p);
	putchar(q);
	putchar('\n');

	return (0);
}

