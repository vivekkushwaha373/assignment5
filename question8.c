#include<stdio.h>
int main()
{
int i=1,N;
printf("enter the value N: ");
scanf("%d",&N);
 do
 {
  printf("%d\n",i*i);
  i+=1;
 }while(i<=N);
 return 0;
}