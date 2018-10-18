#include<stdio.h>
#include<conio.h>
main()
{
int i,j,n;
clrscr();
printf("How many lines:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
{
printf("*");
}
printf("\n");
}
getch();
}