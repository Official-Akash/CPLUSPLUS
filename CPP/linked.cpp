#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
}*start;
class list {
    public:
        node* create_node(int value) {
			struct node *temp, *s;
			temp = new(struct node); 
			if (temp == NULL)
				cout<<"Memory not allocated "<<endl;
			else
			{
				temp->info = value;
				temp->next = NULL;     
				return temp;
			}
		}
        void start(){
			int value;
			cout<<"Enter the value to be inserted: ";cin>>value;
			struct node *temp, *p;
			temp = create_node(value);
			if (start == NULL)
			{
				start = temp;
				start->next = NULL;          
			} 
			else
			{
				p = start;
				start = temp;
				start->next = p;
			}
		}
        void ins(){
			int value, pos, counter = 0; 
			cout<<"Enter the value to be inserted: "; cin>>value;
			struct node *temp, *s, *ptr;
			temp = create_node(value);
			cout<<"Enter the postion at which node to be inserted: "; cin>>pos;
			int i;
			s = start;
			while (s != NULL) {
				s = s->next;
				counter++;
			}
			if (pos == 1) {
				if (start == NULL) {
					start = temp;
					start->next = NULL;
				}
				else {
					ptr = start;
					start = temp;
					start->next = ptr;
				}
			}
			else if (pos > 1  && pos <= counter) {
				s = start;
				for (i = 1; i < pos; i++) {
					ptr = s;
					s = s->next;
				}
				ptr->next = temp;
				temp->next = s;
			}
			else
				cout<<"Positon out of range"<<endl;
		}
        void last() {
			int value;
			cout<<"Enter the value to be inserted: "; cin>>value;
			struct node *temp, *s;
			temp = create_node(value);
			s = start;
			while (s->next != NULL)   
				s = s->next;
			temp->next = NULL;
			s->next = temp;
		}
        void del() {
			int pos, i, counter = 0;
			if (start == NULL)
				cout<<"List is empty"<<endl;
			cout<<"Enter the position of value to be deleted: "; cin>>pos;
			struct node *s, *ptr;
			s = start;
			if (pos == 1)
				start = s->next;
			else{
				while (s != NULL) {
					s = s->next;
					counter++;  
				}
				if (pos > 0 && pos <= counter) {
					s = start;
					for (i = 1;i < pos;i++) {
						ptr = s;
						s = s->next;
					}
					ptr->next = s->next;
				}
				else
					cout<<"Position out of range"<<endl;
				free(s);
			}
		}
        void search() {
			int value, pos = 0;
			bool flag = false;
			if (start == NULL)
				cout<<"List is empty"<<endl;
			cout<<"Enter the value to be searched: "; cin>>value;
			struct node *s;
			s = start;
			while (s != NULL) {
				pos++;
				if (s->info == value) {
					flag = true;
					cout<<"Element "<<value<<" is found at position "<<pos<<endl;
				}
				s = s->next;
			}
			if (!flag)
				cout<<"Element "<<value<<" not found in the list"<<endl;  
		}
        void display() {
			struct node *temp;
			if (start == NULL)
				cout<<"The List is Empty"<<endl;
			temp = start;
			cout<<"Elements of list are: "<<endl;
			while (temp != NULL) {
				cout<<temp->info<<"->";
				temp = temp->next;
			}
			cout<<"NULL"<<endl;
		}
        list() { start = NULL; }
};
void main()
{
    int choice, nodes, element, position, i;
    list sl;
    start = NULL;
	clrscr();
    while(1)
    {
        cout<<"1.Insert start\n2.Insert last\n3.Insert\n4.Delete a Node\n"
		cout<<"5.Search Element\n6.Display Linked List\n7.Exit\n"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1: sl.start();break;
        case 2: sl.last();break;
        case 3: sl.ins();break;
        case 4: sl.del();break;
        case 5: sl.search();break;
        case 6: sl.display();break;
        case 7: exit(0);
        default: cout<<"Wrong choice"<<endl;
        }
    }
getch();
}