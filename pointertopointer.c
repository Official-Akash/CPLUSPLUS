#include<stdio.h>
#include<conio.h>
void main()
{
int x;
int * ptr1;
int ** ptr2;
 x=179;
printf("x=%d\n",x);
ptr1=&x;
ptr2=&ptr1;
printf("pointer1=%d\n",&ptr1);
printf("pointer2=%d\n",**ptr2);
getch();
}