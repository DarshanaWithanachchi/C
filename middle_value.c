#include<stdio.h>
void main()
{
    int x,y,z,a;
    printf("Please Enter 3 Value:");
    scanf("%d%d%d",&x,&y,&z);
    a=(x>y)?((z>x)? x:(z>y)? z:y):((z>y)? y:(z>x)? z:x);
    printf("Middle value is %d",a);
}

