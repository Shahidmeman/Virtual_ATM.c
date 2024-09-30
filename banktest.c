#include <stdio.h>
int main()
{
    int PIN, num, money, D;
    int Amount = 5000;
    int Account;
    do
    {  
       
           
        printf("\nEnter Your PIN:");
        scanf("%d", &PIN);

        if (PIN == 1234)
        {

            printf("\nWelcome To The Virtual ATM.\n");
            printf("1.Check Balance\n");
            printf("2.Withdraw Money\n");
            printf("3.Deposit Money\n");
            printf("4.Exit\n");
            printf("Enter Your choice(1-3) or 4 to exit:\n");
            scanf("%d", &num);
            switch (num)
            {
            case 1:

                printf("Your Total Balance:%d\n", Amount);
                break;
            case 2:
                printf("How much money You Want To Withdraw:\n");
                scanf("%d", &money);
                if (Amount >= money)
                {
                    Amount = Amount - money;
                    printf("Your Transaction Has Been Processed...");
                    printf("\nRemaining Balance:%d\n", Amount);
                }
                else
                {
                    printf("Not Enough Balance To Withdraw");
                }
                break;
            case 3:
                printf("Please Choice The Account\n");
                printf("1.Saving Account\n");
                printf("2.Current Account\n");
                scanf("%d", &Account);
                switch (Account)
                {
                case 1:
                    printf("Enter The Amount You Want To Deposit:");
                    scanf("%d", &D);
                    Amount = Amount + D;
                    printf("Your Money Has Been Deposited & Your Available Balance is %d.", Amount);

                    break;
                case 2:
                    printf("Account isn't Available!!");
                    break;

                default:
                    printf("Cancelled...");
                    break;
                }
                break;

            case 4:
                printf("Your Transaction Has Been Cancelled. ....\n");
                break;

            default:
                printf("Invalid Choice!!");
            }
        }

        else
        {
            printf("\nIncorrect PIN !!");
        }

    } while(num != 1234 || num!=56);

    return 0;
}