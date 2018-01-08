#include<stdio.h>
void main()
{
    int i=1,sum=0;
    while(i<10)
    {
        sum += i;
        if(sum>20)
            break;
        i++;
    }
    printf("%d",i);
}
