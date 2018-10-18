#include<stdio.h>
#include<conio.h>
void main()
{
	int q[7]={56,76,46},i,a,item;
	int max=6,front=0,rear=2;
	printf("Akash\nDelete Queue");
	do
	{
		if(front<0)
		{
			printf("\n==> UNDERFLOW <==\n");
			break;
		}
		else
		{
			item=q[front];
			if(front==rear)
			{
				front=-1;
				rear=-1;
			}
			else if(front==max)
			front=0;
			else
			front=front+1;
		}
		printf("\nNow Elements are=>");
		for(i=rear;i>=front;i--)
		printf("\n%d",q[i]);
		printf("\nCurrent Deleted=>%d",item);
		printf("\nPress 1 to Delete more:");
		scanf("%d",&a);
	}
	while(a==1);
	getch();
}