#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	char name[50];
	int age;
	ofstream f("student.txt");
	cout<<"Enter name:";
	cin>>name;
	cout<<"Enter Age:";
	cin>>age;
	f<<name<<endl;
	f<<age<<endl;
	return 0;
}