#include<stdio.h>
#include<conio.h>
void main()
{
	int p,r,t;
	float si;
	clrscr();
	for(int count=1;count<4;count++)
{
	printf("enter p,r,t\n");
	scanf("%d%d%d",&p,&r,&t);
	si=(p*r*t)/100;
	printf("simple interest is %f\n",si);
}
getch();
}