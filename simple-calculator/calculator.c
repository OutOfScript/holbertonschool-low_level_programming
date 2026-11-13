#include <stdio.h>

/**
 * clear_input - Discards invalid input from stdin
 */
void clear_input(void)
{
    int c;

    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

/**
 * read_number - Reads a valid decimal number
 * @prompt: Message displayed to the user
 * @number: Pointer to the number
 *
 * Return: 1 on success, 0 on EOF
 */
int read_number(char *prompt, double *number)
{
    while (1)
    {
        printf("%s", prompt);

        if (scanf("%lf", number) == 1)
        {
            clear_input();
            return (1);
        }

        if (feof(stdin))
            return (0);

        printf("Invalid number\n");
        clear_input();
    }
}

/**
 * main - Simple calculator
 *
 * Return: 0 on success
 */
int main(void)
{
    int choice;
    double a, b;

    while (1)
    {
        printf("Choice: ");

        if (scanf("%d", &choice) != 1)
        {
            if (feof(stdin))
                return (0);

            printf("Invalid choice\n");
            clear_input();
            continue;
        }

        clear_input();

        if (choice < 1 || choice > 4)
        {
            printf("Invalid choice\n");
            continue;
        }

        if (!read_number("A: ", &a))
            return (0);

        if (!read_number("B: ", &b))
            return (0);

        switch (choice)
        {
            case 1:
                printf("Result: %g\n\n", a + b);
                break;
            case 2:
                printf("Result: %g\n\n", a - b);
                break;
            case 3:
                printf("Result: %g\n\n", a * b);
                break;
            case 4:
                if (b == 0)
                    printf("Error: division by zero\n\n");
                else
                    printf("Result: %g\n\n", a / b);
                break;
        }
        return (0);
    }
}
