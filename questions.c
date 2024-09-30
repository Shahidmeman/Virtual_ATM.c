#include <stdio.h>
int main()
{
    int num;

    do
    {

        printf("Enter the number(1-5) or 0 to exit:");
        scanf("%d", &num);

        switch (num)
        {
       case 0:
            printf("Exiting...\n");
            break;
        case 1:
            printf("You Entered one!!\n");
            break;
        case 2:
            printf("You Entered two!!\n");
            break;
        case 3:
            printf("You Entered Three!!\n");
            break;
        case 4:
            printf("You Entered Four!!\n");
            break;
        case 5:
            printf("You Entered Five!!\n");
            break;
        

        default:
            printf("Invalid number!!\n");
           
        }
  
         }while (num != 0);
    

    return 0;
}
//  #include <stdio.h>

// int main() {
//     int num;

//     do {
//         printf("Enter a number (1-5) or 0 to exit: ");
//         scanf("%d", &num);

//         switch (num) {
//             case 1:
//                 printf("You entered One.\n");
//                 break;
//             case 2:
//                 printf("You entered Two.\n");
//                 break;
//             case 3:
//                 printf("You entered Three.\n");
//                 break;
//             case 4:
//                 printf("You entered Four.\n");
//                 break;
//             case 5:
//                 printf("You entered Five.\n");
//                 break;
//             case 0:
//                 printf("Exiting...\n");
//                 break;
//             default:
//                 printf("Invalid input.\n");
//         }

//     } while (num != 0);

//     return 0;
// }
// 0