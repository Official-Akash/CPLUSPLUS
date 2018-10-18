#include<stdio.h>
#include<conio.h>
main()
{
char text[80];
int count,tag;
for(count=0;(text[count]=getchar())!='\n';++count)
tag=count;
for(count=0;count<=tag;++count)
putchar(toupper(text[count]));
}