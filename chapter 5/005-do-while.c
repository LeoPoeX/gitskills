#include<stdio.h>

void main()
{
    int i,sum;
    sum=0;
    i=1;
    do
    {
        sum=sum+i;
        i++;
    }
    while(i<=100);

    printf("%d\n",sum);
}
