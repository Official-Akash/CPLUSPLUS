#include<stdio.h>
#include<conio.h>
int a[100],n;
void q(int a[],int,int );
s(int a[],int,int );
void main()
{
	int i;
	clrscr();
	printf("How many Elements?");
	scanf("%d",&n);
	printf("\nenter elements;");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	q(a,0,n-1);
	printf("\nSorting Array:");
	for(i=0;i<n;i++)
	{
	printf("\n%d",a[i]);
	}
	getch();
}
void q(int a[],int lb,int ub)
{
	int p;
	if(lb<ub)
	{
		p=s(a,lb,ub);
		q(a,lb,p-1);
		q(a,p+1,ub);
	}
}
s(int a[],int lb,int ub)
{
	int l,r,loc,t;
	l=lb;
	r=ub;
	loc=lb;
	while(1)
	{
	while((a[loc]<=a[r])&&(loc!=r))
	{
		r=r-1;
	}
		if(loc==r)
		{
		return loc;
		}
		t=a[loc];
		a[loc]=a[r];
		a[r]=t;
		loc=r;
		while((a[l]<=a[loc])&&(loc!=l))
		{
			l=l+1;
		}
			if(loc==l)
			{
			return loc;
			}
			t=a[loc];
			a[loc]=a[l];
			a[l]=t;
			loc=l;
			}
}