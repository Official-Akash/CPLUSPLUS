#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int m,n,p,q,c,d,k,sum=0;
int first[10][10],second[10][10],multiple[10][10];
clrscr();
cout<<"Enter number of rows and columns of first matrix\n";
cin>>m>>n;
cout<<"Enter elements of first matrix\n";

for(c=0;c<m;c++)

for(d=0;d<n;d++)
cin>>first[c][d];

cout<<"Enter number of rows and columns of second matrix\n";
cin>>p>>q;

if(n!=p)
cout<<"matrix is not correct";
else
{
cout<<"Enter elements of second matrix\n";

for(c=0;c<p;c++)

for(d=0;d<q;d++)
cin>>second[c][d];
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
cout<<"product of matrices is :\n";
for(c=0;c<m;c++)
for(d=0;d<q;d++)
cout<<"\n"<<multiple[c][d];
cout<<"\n";
}
getch();
return 0;
}