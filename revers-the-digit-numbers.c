#include<stdio.h>
void main()
{
    int number,invers;
    printf("Enter Your number:");
    scanf("%d",&number);
    while(number!=0)
    {
        invers=number%10;
        printf("%d",invers);
        number=number/10;
    }
}
