#include<stdio.h>
int main()
{int i,N;
printf("enter the value N: ");
scanf("%d",&N);
    for(i=1;i<11;i++)
    {
        printf("%d*%d=%d\n",N,i,N*i);
    }   
    return 0;
}