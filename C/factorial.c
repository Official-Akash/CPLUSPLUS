#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("n= ");
scanf(" %d",&n);
printf("n!=%d",factorial(n));
}
long int factorial(int n)
{
int i;
long int prod = 1;
if (n>1)
for(i=2;i<=n;++i)
prod*= i;
return(prod);
}