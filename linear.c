#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100], n, i, data, loc;
	printf("How many elements?");
	scanf("%d", &n);
	printf("enter:");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("Enter element to search:");
	scanf("%d", &data);
	for (i = 0; i < n; i++)
	{
		if (a[i] == data)
		{
			loc = i;
			break;
		}
	}
	if(loc<=n)
	printf("%d found at %d loc",data,loc);
	else
	printf("Invalid search!!");
	getch();
}