#include<stdio.h>
void main()
{
    float s1,s2,s3,average;
    printf("Enter 3 subject mark:");
    scanf("%f%f%f",&s1,&s2,&s3);
    average=(s1+s2+s3)/3;
    if((100>=average)&&(average>=70))
        printf("Very Good");
    else if((70>average)&&(average>=50))
        printf("Good");
    else if((55>average)&&(average>=40))
        printf("pass");
    else if((40>average)&&(average>=0))
        printf("pass");
    else
        printf("invalid");

}
