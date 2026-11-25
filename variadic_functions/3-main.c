#include <stddef.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_all("ceis", 'B', 3, "stSchool");
	print_all("cifs", 'A', 42, 3.14, "Hello");
	print_all("s", NULL);
	print_all(NULL);

	return (0);
}
