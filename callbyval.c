#include<stdio.h>
#include<conio.h>
void swap(int x,int y);
void main()
{
int a=10,b=20;
swap(a,b);
}
void swap(int x,int y)
{
int t;
{
t=x;
x=y;
y=t;
printf("x=%d\n y=%d",x,y);
}
getch();
}