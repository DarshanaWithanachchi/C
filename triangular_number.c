#include<stdio.h>
void main()
{
     int n,number,tr_number;
     printf("What triangular number do you want:");
     scanf("%d",&number);
     tr_number=0;
     for(n=1;n<=number;++n)
        tr_number += n;
     printf("Traingular number %d is = %d\n",number,tr_number);
}
