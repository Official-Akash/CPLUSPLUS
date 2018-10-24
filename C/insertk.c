#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20],i,n,pos,item;
	printf("Akash\n\nHow Many Elements?");
	scanf("%d",&n);
	printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter Position to be inserted:");
    scanf("%d",&pos);
    printf("Enter Value to be inserted:");
    scanf("%d",&item);
    for(i=n;i>=pos;i--)
    {
    	a[i+1]=a[i];
    }
    a[pos]=item;
    for(i=0;i<=n;i++)
    printf("\t%d\n",a[i]);
    getch();
}