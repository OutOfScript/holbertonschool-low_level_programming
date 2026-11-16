
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *buffer;
    unsigned int i;

    buffer = create_array(98, 'H');

    if (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }

    for (i = 0; i < 98; i++)
    {
        printf("0x%02x", buffer[i]);
        if (i < 97)
            printf(" ");
    }

    printf("\n");
    free(buffer);

    return (0);
}

