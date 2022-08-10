#include<stdio.h>
int main()
{int i=2;
int N;
printf("enter the value N: ");
scanf("%d",&N);
 do
 {
  printf("%d\n",i);
  i=i+2;
 }while(i<=N*2);
 return 0;
}