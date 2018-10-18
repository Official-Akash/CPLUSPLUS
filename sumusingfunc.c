#include<stdio.h>
#include<conio.h>
void num(int a,int b);
void main()
{
int a=14,b=34;
clrscr();
num(a,b);
getch();
}
void num(int a,int b)
{
int c=a+b;
printf("sum is %d",c);
}