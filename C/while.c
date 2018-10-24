#include<stdio.h>
#include<conio.h>
main()
{
int num,i;
printf("Enter the number: ");
scanf("%d",&num);
{
i=2;
while(i <= num - 1)
  {
  	if(num%i==0)
printf("it is not a prime number");
break;
  }
i++;
}
if(i = num)
printf("it is a prime number");
  getch();
}