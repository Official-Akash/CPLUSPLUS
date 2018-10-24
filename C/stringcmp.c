#include<stdio.h>
#include<string.h>
int main()
{
char str1[]="jerry";
char str2[20]="ferry";
int i,j,k;

i=strcmp(str1,"jerry");
j=strcmp(str1,str2);
printf("%d%d\n",i,j);
return 0;
}