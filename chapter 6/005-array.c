#include<stdio.h>

void main()
{
    int a[10];
    int i,j,t;

    printf("input 10 numbers:\n");

    for (i = 0;i < 10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j = 0;j < 9;j++)    //total degree
    {
        for(i = 0;i < 9 - j;i++)    //i-j order compare
        {
            if(a[i] > a[i + 1])
            {
                t = a[i];a[i] = a[i + 1];a[i + 1] = t;  //a[i] and a[i+1]transposition
            }
        }
    }
        printf("the sorted numbers:\n");
        for(i = 0;i < 10;i++)   //The output is sorted number
        {
            printf("%d  ",a[i]);
        }

}
