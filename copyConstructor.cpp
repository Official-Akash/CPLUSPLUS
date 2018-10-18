#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
	private:
	int l,m;
	float n;
	public:
	demo(int a,int b,float c)
	{
		l=a;
		m=b;
		n=c;
	}
	demo(demo &ptr)
	{
		l=ptr.l;
		m=ptr.m;
		n=ptr.n;
	}
	void put()
	{
		cout<<l<<m<<n;
	}
};
main()
{
	demo d(3,4,5.1);
	demo d1(d);
	d1.put();
}