#include<stdio.h>
#include<conio.h>
int main()
{
int m,n,p,q,c,d,k,sum=0;
int first[10][10],second[10][10],multiple[10][10];
clrscr();
printf("Enter number of rows and columns of first matrix\n");
scanf("%d%d",&m,&n);
printf("Enter elements of first matrix\n");

for(c=0;c<m;c++)

for(d=0;d<n;d++)
scanf("%d",&first[c][d]);

printf("Enter number of rows and columns of second matrix\n");
scanf("%d%d",&p,&q);

if(n!=p)
printf("matrix is not correct");
else
{
printf("Enter elements of second matrix\n");

for(c=0;c<p;c++)

for(d=0;d<q;d++)
scanf("%d",&second[c][d]);

for(c=0;c<m;c++)
{
for(d=0;d<q;d++)
{
for(k=0;k<p;k++)
{
sum=sum+(first[c][k]*second[k][d]);
}
multiple[c][d]=sum;
sum=0;
}
}
printf("product of matrices is :\n");
for(c=0;c<m;c++)
for(d=0;d<q;d++)
printf("%d\n",multiple[c][d]);
printf("\n");
}
getch();
return 0;
}