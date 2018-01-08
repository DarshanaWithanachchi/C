#include<stdio.h>
void main()
{
    float v1,v2;
    char operator;
    printf("Plese enter value operator value: ");
    scanf("%f%c%f",&v1,&operator,&v2);
    switch(operator)
    {
        case '+':printf("%f\n",v1+v2);break;
        case '-':printf("%f\n",v1-v2);break;
        case '*':printf("%f\n",v1*v2);break;
        case '/':if (v2!=0)
                    printf("%f\n",v1/v2);
                else
                    printf("warning:division by zero");
        default:printf("Unkown operator");break;
    }

}
