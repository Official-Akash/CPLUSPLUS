#include<stdio.h>
#include<conio.h>
int a,b,result;
void main()
{
clrscr();
sum();
sub();
getch();
}
sum()
{
printf("Enter two numbers to find their sum");
scanf("%d%d",&a,&b);
result=a+b;
printf("\n the sum of two numbers is %d",result);
return 0;
}
sub()
{
printf("Enter two numbers to find their difference");
scanf("%d%d",&a,&b);
result=a-b;
printf("\n the difference between two numbers is %d",result);
return 0;
}