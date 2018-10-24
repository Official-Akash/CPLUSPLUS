#include<stdio.h>
#include<conio.h>
int main()
{
	int c, first, last, mid, n, search, array[100];
	printf("How many elements?\n");
	scanf("%d", &n);
	printf("Enter %d elements\n", n);
	for (c = 0; c < n; c++)
		scanf("%d", &array[c]);
	printf("Enter value to find\n");
	scanf("%d", &search);
	first = 0;
	last = n - 1;
	mid = (first + last) / 2;
	while (first <= last)
	{
		if (array[mid] < search)
			first = mid + 1;
		else if (array[mid] == search)
		{
			printf("Search successful\n%d found at location %d.\n", search, mid);
			break;
		}
		else
			last = mid - 1;
		mid = (first + last) / 2;
	}
	if (first > last)
		printf("Not found! %d is not present in the list.\n", search);
	 return 0;
}