#include<stdio.h>
int main()
{
int num;
printf("enter the value N: ");
scanf("%d",&num);
int i=num*2-1;
 do
 {
  printf("%d\n",i);
  i=i-2;
 }while(i>0);
 return 0;
}