#include<stdio.h>
#include<conio.h>
void main()
{
	int stack[20]={19,22},i,a;
	int top=1,data;
	clrscr();
	printf("Akash\nPOP");
	do
	{
		if(top<0)
		{
			printf("UNDERFLOW!!\n");
			break;
		}
	else
	{
		data=stack[top];
		top=top-1;
		printf("\nElements are:");
		for(i=top;i>=0;i--)
		printf("\n%d",stack[i]);
		printf("\nCurrent Deleted Element is %d",data);
	}
	printf("\nPress 1 for New POP:");
	scanf("%d",&a);
	}
	while(a==1);
	getch();
}