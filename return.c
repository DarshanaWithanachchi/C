#include<stdio.h>
    double add(float,float);
    double sub(float,float);
    double mul(float,float);
    double div(float,float);
    void error();
    void main()
    {
        float v1,v2;
        char op;
        printf("Enter value operator value:");
        scanf("%f%c%f",&v1,&op,&v2);
        switch(op)
        {
            case '+':printf("lf\n",add(v1,v2));break;
            case '-':printf("lf\n",sub(v1,v2));break;
            case '*':printf("lf\n",mul(v1,v2));break;
            case '/':if(v2!=0)
                        printf("lf\n",div(v1,v2));
                    else
                        error();break;
            default:printf("Unknown operator\n");break;
        }
    }



double add(float v1,float v2)
{
   return (v1+v2);
}

double sub(float v1,float v2)
{
    return(v1-v2);
}

double mul(float v1,float v2)
{
    return(v1*v2);
}

double div(float v1,float v2)
{
    return(v1/v2);
}

void error()
{
    printf("Warning : Devision by zero\n");
}

