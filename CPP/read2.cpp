#include<iostream>
#include<fstream>
using namespace std;
main()
{
	char name[40];
	int age;
	ifstream fin("student.txt");
	fin>>age;
	fin>>name;
	cout<<"Age:"<<age<<endl;
	cout<<"Name:"<<name<<endl;
	fin>>age;
	fin>>name;
	cout<<"Age:"<<age<<endl;
	cout<<"Name:"<<name<<endl;
}