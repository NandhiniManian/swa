#include<stdio.h>
void main()
{
int a,b;
printf("Enter the numbers:\n");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("The numbers after swapping are:\na=%d\nb=%d",a,b);
}
