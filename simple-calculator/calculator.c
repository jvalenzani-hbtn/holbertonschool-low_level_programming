/* calculator_student_like.c 

Model Solution — “Student-like”, functional but low standards (mandatory tasks only)

Characteristics (intentionally):
- Mostly everything in main
- Duplicated code for reading A/B
- Minimal structure
- Validates only integer range for menu options (0–4)
- Does not handle non-numeric menu input (may get stuck) — consistent with mandatory scope
- Includes obvious “peer review targets”: repetition, long function, magic numbers, mixed concerns

*/

#include <stdio.h>

int main(void)
{
    int choice;
    double a;
    double b;

    while (1)
    {
        printf("Simple Calculator\n");
        printf("1) Add\n");
        printf("2) Subtract\n");
        printf("3) Multiply\n");
        printf("4) Divide\n");
        printf("0) Quit\n");

        printf("Choice: ");
        /* Mandatory scope: assumes the user enters an integer.
           If the user types letters, this program may fail (expected). */
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("Bye!\n");
            break;
        }

        if (choice < 0 || choice > 4)
        {
            printf("Invalid choice\n");
            continue;
        }

        /* Repeated operand reading (peer review target). */
        printf("A: ");
        scanf("%lf", &a);

        printf("B: ");
        scanf("%lf", &b);

        if (choice == 1)
        {
            printf("Result: %g\n", a + b);
        }
        else if (choice == 2)
        {
            printf("Result: %g\n", a - b);
        }
        else if (choice == 3)
        {
            printf("Result: %g\n", a * b);
        }
        else if (choice == 4)
        {
            if (b == 0.0)
            {
                printf("Error: division by zero\n");
            }
            else
            {
                printf("Result: %g\n", a / b);
            }
        }
    }

    return 0;
}
