#include<iostream>
#include<conio.h>
using namespace std;
class post
{
	int m;
	public:
	void get()
	{
		cout<<"Enter any value:";
		cin>>m;
	}
	void operator ++(int)
	{
		m=m+5;
	}
	void put()
	{
		cout<<""<<m;
	}
};
int main()
{
	post ob;
	ob.get();
	ob++;
	ob.put();
}