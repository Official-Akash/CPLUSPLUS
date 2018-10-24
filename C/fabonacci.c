#include<stdio.h>
#include<conio.h>
int fib(int i);
main()
{
int n,i;
clrscr();
printf("Akash\n\nEnter no of elements\n");
scanf("%d",&n);
for(i=0;i<n;i++)
printf("%d.Element is:%d\n",i,fib(i));
getch();
}
int fib(int i)
{
if(i==0)
return 0;
if(i==1)
return 1;
return (fib(i-1)+fib(i-2));
}