#include<stdio.h>
#include<conio.h>
main()
{
int i,n;
char a;
FILE*f1;
printf("enter no of char");
scanf("%d",&n);
f1=fopen("abc","w");
for(i=0;i<n;i++)
{
a=getche();
putc(a,f1);
}
fclose(f1);
f1=fopen("abc","r");
for(i=0;i<n;i++)
{
a=getc(f1);
printf("%c",a);
}
fclose(f1);
getch();
}