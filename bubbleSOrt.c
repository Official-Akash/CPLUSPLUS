#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10], i, j, n, c;
	clrscr();
	printf("Akash\n\nHow many Elements?");
	scanf("%d", &n);
	printf("Enter array elements:");
	for (i = 0; i <= n; i++)
		scanf("%d", &a[i]);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				c = a[j];
				a[j] = a[j + 1];
				a[j + 1] = c;
			}
		}
	}
	printf("After sorting Elements are :");
	for (i = 0; i <= n; i++)
		printf("%d\n", a[i]);
	getch();
}