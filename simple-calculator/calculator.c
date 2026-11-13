#include <stdio.h>

int main(void)
{
    int choice;
    double a, b;

    printf("Choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("A: ");
            scanf("%lf", &a);

            printf("B: ");
            scanf("%lf", &b);

            printf("Result: %g\n\n", a + b);
            break;

        default:
            printf("Invalid choice\n");
            break;
        case 2:
            printf("A: ");
            scanf("%lf", &a);

            printf("B: ");
            scanf("%lf", &b);

            printf("Result: %g\n\n", a - b);
            break;
        case 3:
            printf("A: ");
            scanf("%lf", &a);

            printf("B: ");
            scanf("%lf", &b);

            printf("Result: %g\n\n", a * b);
            break;
	            case 4:
            printf("A: ");
            scanf("%lf", &a);

            printf("B: ");
            scanf("%lf", &b);

            if (b == 0)
            {
                printf("Error: division by zero\n\n");
            }
            else
            {
                printf("Result: %g\n\n", a / b);
            }
            break;
    }

    return (0);
}
