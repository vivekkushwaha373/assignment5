#include<stdio.h>
int main()
{
int i;
int N;
printf("enter the value N: ");

scanf("%d",&N);
i=N*2;
 do
 {
  printf("%d\n",i);
  i=i-2;
 }while(i>0);
 return 0;
}