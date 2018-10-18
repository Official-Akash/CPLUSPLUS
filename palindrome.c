#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char str1[20],str2[20];
clrscr();
printf("Enter a string\n");
gets(str1);
strcpy(str2,str1);
strrev(str2);
printf("original= %s",str1);
printf("\n reverse=%s",str2);
if((strcmp(str1,str2)==0))
printf("\n Palindrome string");
else
printf("\n Not a Palindrome string");
return 0;
}