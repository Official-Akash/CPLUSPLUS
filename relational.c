#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c;
printf("enter three numbers\n");
scanf("%f%f%f",&a,&b,&c);
printf("largest no is\n");
if (a>b)
{
	if (a>c)
	printf("%f\n",a);
	else
	printf("%f\n",c);
}
else
{
	if (b>c)
	printf("%f\n",b);
	else
	printf("%f\n",c);
}
getch();
}