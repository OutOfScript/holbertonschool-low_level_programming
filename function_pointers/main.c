#include <stdio.h>
#include "function_pointers.h"

void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

int main(void)
{
    print_name("Bob", print_name_as_is);
    return (0);
}
