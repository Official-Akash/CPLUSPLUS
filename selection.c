#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100], n, i, j, c, loc, small;
	clrscr();
	printf("Akash\n\nHow many elements?");
	scanf("%d", &n);
	printf("Enter elements :");
	for (i = 0; i <= n; i++)
		scanf("%d", &a[i]);
	for (i = 0; i <= n; i++)
	{
		small = a[i];
		loc = i;
		for (j = i; j < n; j++)
		{
			if (small > a[j + 1])
			{
				small = a[j + 1];
				loc = j + 1;
			}
		}
		if (loc != i)
		{
			c = a[i];
			a[i] = a[loc];
			a[loc] = c;
		}
	}
	printf("After sorting:\n");
	for (i = 0; i <= n; i++)
		printf("%d\t", a[i]);
	getch();
}