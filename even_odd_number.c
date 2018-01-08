#include<stdio.h>
void main()
{
    int number;
    printf("Please Enter Your number:");
    scanf("%d",&number);
    if(number%2 == 0)
        printf("Number is even");
    else
        printf("Number is odd");
}
