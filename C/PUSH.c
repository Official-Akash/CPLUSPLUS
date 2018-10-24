#include<stdio.h>
#include<conio.h>
void main()
{
	int stack[2], a, i, data, top = -1;
	int max = 1;
	clrscr();
	printf("Akash\nPUSH");
	do
	{
		if (top == max)
		{
			printf("\n==> OVERFLOW <==\n");
			break;
		}
		else
		{
			top = top + 1;
			printf("\nEnter Element==>");
			scanf("%d", &stack[top]);
			data = stack[top];
			printf("\nElements are==>");
			for (i = top; i >= 0; i--)
			{
				printf("\n%d", stack[i]);
			}
			printf("\nNew Inserted Element ==> %d", data);
		}
		printf("\nPress 1 for New PUSH==>");
		scanf("%d", &a);
	}
	while (a == 1);
	getch();
}