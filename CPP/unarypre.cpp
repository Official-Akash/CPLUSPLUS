#include<iostream>
#include<conio.h>
using namespace std;
class pre
{
	int m;
	public:
	void get()
	{
		cout<<"Enter any value:";
		cin>>m;
	}
	void operator ++()
	{
		m=m+5;
	}
	void put()
	{
		cout<<"====>"<<m;
	}
};
int main()
{
	pre ob;
	ob.get();
	++ob;
	ob.put();
}