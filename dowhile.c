#include<stdio.h>
#include<conio.h>
int main()
{
int number;
char character;
do
{
printf("\n Enter the number");
scanf("%d",&number);
printf("\n Square of number is:%d",number*number);
printf("\n wish to continue?");
scanf("%c",&character);
}
while(character=='Y');
return 0;
}