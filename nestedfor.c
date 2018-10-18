#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c,sum;
	for(r=1;r<=4;r++)
	{
		for(c=1;c<=3;c++)
		{
			sum=r+c;
			printf("%d\n",sum);
		}
	}
	getch();
}