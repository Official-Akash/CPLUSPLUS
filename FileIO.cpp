#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int roll,n,i;
	char ch;
	char name[30];
	ofstream obj("student.txt");
	cout<<"How many Records?";
	cin>>n;
	for(i=0;i<n;i++)
	{
	cout << "Enter Roll No";
	cin >> roll;
	cout << "Enter Name";
	cin >> name;
	obj<<roll<<endl;
	obj<<name<<endl;
	}
	obj.close();
	ifstream ob("student.txt");
	cout<<"contents are:";
	while(ob.get(ch))
	cout<<ch;
	return 0;
}