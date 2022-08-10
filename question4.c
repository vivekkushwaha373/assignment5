#include<stdio.h>
int main()
{
int i=1,num;
printf("enter the value N: ");
scanf("%d",&num);
 do
 {
  printf("%d\n",i);
  i=i+2;
 }while(i<(num*2));
 return 0;
}