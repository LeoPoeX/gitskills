#include<stdio.h>

void main()
{
    int i,sum = 0;
    i = 0;

    loop: if (i<=100)
    {
      sum = sum + i;
      i++;
      goto loop;
    }
  printf("%d\n",sum);
}