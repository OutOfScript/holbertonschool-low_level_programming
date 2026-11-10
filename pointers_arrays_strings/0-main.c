#include "main.h"
#include <stdio.h>

int main(void)
{
    char s1[20] = "Hello ";
    char s2[] = "World";

    printf("%s\n", _strcat(s1, s2));

    return (0);
}
