#include<stdio.h>
#include<conio.h>
void main()
{
char day;
clrscr();
printf("enter the character\n");
scanf("%c",&day);
switch (day)
{
case 'a':
printf("monday\n");
break;
case 'A':
printf("tuesday\n");
break;
case 'b':
printf("wednesday\n");
break;
case 'B':
printf("thursday\n");
break;
case 'c':
printf("friday\n");
break;
case 'C':
printf("saturday\n");
break;
case 'd':
printf("sunday\n");
break;
default:
printf("\n please enter a,b,c,d,A,B,C");
break;
}
getch();
}