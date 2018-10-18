#include<stdio.h>
#include<conio.h>
void main()
{
int m,n,c,d,first[10][10],second[10][10],sum[10][10];
printf("Enter no of rows and columns\n");
scanf("%d%d",&m,&n);
printf("Enter elements of first matrix\n");
for(c=0;c<m;c++)
    for(d=0;d<n;d++)
         scanf("%d",&first[c][d]);
printf("enter elements of 2\n");
for(c=0;c<m;c++)
     for(d=0;d<n;d++)
         scanf("%d",&second[c][d]);
sum[c][d]=first[c][d]+second[c][d];
printf("sum of matrices is:\n");

for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
printf("%d ",sum[c][d]);
printf("\n");
}
getch();
return(sum[c][d]);
}