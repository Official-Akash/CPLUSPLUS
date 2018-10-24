#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j,t,a[100];
	clrscr();
	printf("How many elements?==>");
	scanf("%d",&n);
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<n;i++)
	{
		t=a[i];
		j=i-1;
		while((t<a[j])&&(j>=0))
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
	}
	printf("After Sorting:\n");
	for(i=0;i<n;i++)
	printf("\t%d\n",a[i]);
	getch();
}