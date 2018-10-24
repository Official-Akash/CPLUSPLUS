#include<stdio.h>
#include<conio.h>
#include<alloca.h>
using namespace std;
main()
{
	clrscr();
	struct node
	{
		int data;
		struct node *link;
	};
	struct node *first,*sec,*third;
	first=(struct node *)malloc(sizeof(struct node));
	first->data=560;
	sec = (struct node *) malloc (sizeof(struct node));
	sec->data=265;
	third = (struct node *) malloc (sizeof(struct node));
	third->data=334;
	first->link=third;
	sec->link=first;
	third->link=NULL;
	printf("-----------------------------------------\n");
	printf("|Loc name  |\tData |\tMemory\t\t| \n-----------------------------------------\n");
	printf("|    1\t   |\t%d   |\t%d     |\n",first->data,first->link);
	printf("-----------------------------------------\n");
	printf("|    2\t   |\t%d   |\t%d     |\n",sec->data, sec->link);
	printf("-----------------------------------------\n");
	printf("|    3\t   |\t%d   |\t%d\t\t|\n",third->data, third->link);
	printf("-----------------------------------------\n");
}