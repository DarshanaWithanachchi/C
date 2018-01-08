#include<stdio.h>
void main()
{
    int x,y,s;
    printf("Input 2 integers you want to add:");
    scanf("%d%d",&x,&y);
    s=add(x,y);
    printf("sum %d ",s);
}

int add(int a,int b)
{
    int c;
    c=a+b;
    return(c);
}
