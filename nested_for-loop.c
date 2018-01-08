#include<stdio.h>
void main()
{
    int inner_value,outer_value;
    for(outer_value=1;outer_value<5;outer_value++)
    {
        printf("\n%3d--",outer_value);
        for(inner_value=1;inner_value<=5;inner_value++)
            printf("%3d",inner_value*outer_value);
    }

}
