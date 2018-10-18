#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20], i, loc, item, n;
	printf("Akash\n\n");
	printf("How many Elements?");
	scanf("%d", &n);
	printf("Enter elements:\n");
	for (i = 0; i <n; i++)
		scanf("%d", &a[i]);
	printf("Enter element to be deleted");
	scanf("%d", &item);
	{
		for (i = 0; i < n; i++)
			if (a[i] == item)
				loc = i;
	}
	for (i = loc; i < n; i++)
		a[i] = a[i + 1];
	printf("After deletion\n");
	for (i = 0; i < n-1; i++)
		printf("%d\t", a[i]);
	getch();
}