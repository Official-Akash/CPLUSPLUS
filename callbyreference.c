#include<stdio.h>
#include<conio.h>
void main()
{
int x=10,y=20;
void swap(int * x,int * y);
swap(&x,&y);
printf("x=%d y=%d",x,y);
}
void swap(int * x,int * y)
{
int t;
t=*x;
*x=*y;
*y=t;
getch();
}