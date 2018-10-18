#include<stdio.h>
#include<conio.h>
void main()
{
int a=10,b=5,c;
char ch;
printf("Enter the operation(+,-,*,/)");
scanf("%c",&ch);
{
if (ch=="+")
c=a+b;
elseif(ch=="-")
c=a-b;
elseif(ch=="*")
c=a*b;
elseif(ch=="/")
c=a/b;
}
printf("c=%d",c);
getch();
}