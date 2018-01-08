#include<stdio.h>
void main()
{
    int number,reverse;
    printf("Enter your number :");
    scanf("%d",&number);
    do
    {
        reverse=number%10;
        printf("%d",reverse);
        number=number/10;
    }while(number!=0);
}
