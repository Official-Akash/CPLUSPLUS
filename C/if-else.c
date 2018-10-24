#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf(" enter a number\n");
	scanf("%d",&num);
	if (num %2 == 0)
{
	printf("\n you entered even number");
}
else
{
	printf("\n you entered odd number");
}
getch();
}