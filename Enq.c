#include<stdio.h>
#include<conio.h>
void main()
{
	int q[7]={99,88,77,66,55,44};
	int item,front=0,rear=5,i,a,max=6;
	printf("Akash\nQueue Insert");
	do
	{
		if(((front==0)&&(rear==max))||(front==rear+1))
		{
			printf("OVERFLOW!!\n");
			break;
		}
		else
		{
			if(front<0)
			{
				front=0;
				rear=0;
			}
			else if(rear==max)
			rear=0;
			else
			rear=rear+1;
		}
		printf("\nEnter Element to insert:");
		scanf("%d",&q[rear]);
		item=q[rear];
		printf("\nNow elements Are:");
		for(i=0;i<=rear;i++)
		printf("\n%d",q[i]);
		printf("\nNew Inserted Element is %d",item);
		printf("\nPress 1 for new Insertion:");
		scanf("%d",&a);
	}
	while(a==1);
	getch();
}