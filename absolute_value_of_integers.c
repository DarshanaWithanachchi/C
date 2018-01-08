#include<stdio.h>
void main()
{
    int number;
    printf("Enter Your number: ");
    scanf("%d",&number);
    if(number<0)
    number=-number;
        printf("The absolute value is %d",number);
}
