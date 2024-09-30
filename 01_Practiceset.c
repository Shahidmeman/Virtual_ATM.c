#include<stdio.h>
int main()
{
int week;
printf("Enter the day in integer:");
scanf("%d",&week);

switch (week)
{
case 1:
    printf("Monday");
    break;
case 2:
printf("Tuesday");
    break;

default:
printf("sorry u have entered wrong day!");
    break;
}
int i=0;
while (i<10)
{
    printf("\nThe value of even numbers are %d\n",i);
    i++;
}

return 0;
}