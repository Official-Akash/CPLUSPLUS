#include<stdio.h>
#include<conio.h>
void main()
{
float marks;
printf("enter your percentage of marks:\n");
scanf("%f",&marks);
if(marks>90 && marks<=99)
printf("your grade is A+\n CONGRATS");
else if(marks>80 && marks<90)
printf("your grade is A");
else if(marks>70 && marks<80)
printf("your grade is B+");
else if(marks>60 && marks<70)
printf("your grade is B");
else if(marks>50 && marks<60)
printf("you got C+ grade");
else if(marks>40 && marks<50)
printf("you got C grade");
else if(marks>=0 && marks<=40)
printf("You are fail");
getch();
}