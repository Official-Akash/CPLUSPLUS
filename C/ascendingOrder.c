#include<stdio.h>
#include<conio.h>
void main()
{
int ar[100],i,j,n,temp;

printf(" Enter the no of elements:");
scanf("%d",&n);

for(i=0;i<n;++i)
{
printf("%d. Enter element:",i+1);
scanf("%d",&ar[i]);
}

   for(j=0;j<n-1;++j)
for(i=0;i<n-j-1;++i)
{
if(ar[i]>ar[i+1])
{
temp=ar[i];
ar[i]=ar[i+1];
ar[i+1]=temp;
}
}
printf(" The elements in ascending order are- ");
for(i=0;i<n;++i)

printf(" %d",ar[i]);

getch();
}