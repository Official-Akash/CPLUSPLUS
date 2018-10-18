#include<stdio.h>
#include<string.h>
int main()
{
char source[]=" folks";
char target[]="hello";
strcat(target,source);
printf("%s\n",source);
printf("%s",target);
return 0;
}