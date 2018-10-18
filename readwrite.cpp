#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char file[50];
	char buffer[255];
	cout<<"FILE NAME:";
	cin>>file;
	ofstream f(file);
	cout<<"Enter text:";
	cin.ignore(1,'\n');
	cin.getline(buffer,255);
	f<<buffer<<"\n";
	f.close();
	ifstream fi(file);
	cout<<"contents are:\n";
	char ch;
	while(fi.get(ch))
	cout<<ch;
	cout<<"\n***EOF***\n";
	fi.close();
	return 0;
}