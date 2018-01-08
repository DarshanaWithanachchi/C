#include<stdio.h>
void main()
{
 float v1,v2;
 char operator;
 printf("Enter your expression of the value operator value: ");
 scanf("%f%c%f",&v1,&operator,&v2);
 if(operator=='+')
        printf("%f\n",v1+v2);
 else if(operator=='-')
        printf("%f\n",v1-v2);
 else if(operator=='*')
        printf("%f\n",v1*v2);
 else if(operator=='/')
    if (v2!=0)
        printf("%f\n",v1/v2);
    else
        printf("Warning:Division by zero");
 else
    printf("Unkown Operator\n");
}


