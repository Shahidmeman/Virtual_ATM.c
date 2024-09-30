#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c, num;
    do
    {
        printf("\nWelcome To The Calculator\n1.Addition\n");
        printf("2.Subtraction\n");
        printf("3:Multiplication\n");
        printf("4:Division\n");
        printf("5:Exit\n");
        printf("Enter Your choice(1-4) or 5 to exit:\n");
        scanf("%d", &num);

        switch (num)
        {
        case 1:

            printf("Enter Your value a&b:\n");
            scanf("%d\n%d", &a, &b);
            c = a + b;
            printf("The Addition of a & b is:%d\n", c);

            break;
        case 2:
            printf("Enter Your value a&b:\n");
            scanf("%d\n%d", &a, &b);
            c = a - b;
            printf("The Subtraction of a & b is:%d\n", c);

            break;
        case 3:
            printf("Enter Your value a&b:\n");
            scanf("%d\n%d", &a, &b);
            c = a * b;
            printf("The Multiplication of a & b is:%d\n", c);

            break;
        case 4:
            printf("Enter Your value a&b:\n");
            scanf("%d\n%d", &a, &b);
            c = a / b;
            printf("The Division of a & b is:%d\n", c);

            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid Choice!!");
        }
    } while (num != 5);

    return 0;
}