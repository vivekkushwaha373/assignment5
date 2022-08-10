#include<stdio.h>
int main()
{
int num,i;
printf("enter the value N: ");
scanf("%d",&num);
i=num;
 do
 {
  printf("%d\n",i);
  i--;
 }while(i>0);
 return 0;
}