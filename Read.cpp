#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch;
	ifstream obj("student.txt");
	cout<<"contents are:";
	while(obj.get(ch))
	cout<<ch;
	return 0;
}