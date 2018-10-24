#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,n;
clrscr();
printf("How many Elements?");
scanf("%d",&n);
printf("Enter Elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("after deletion ");
for(i=0;i<n-1;i++)
printf("%d\n",a[i]);
getch();
}