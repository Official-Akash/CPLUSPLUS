#include<iostream>
#include<conio.h>
using namespace std;
class fact
{
	int i,n,f;
	public:
	void get()
	{
		cout<<"Enter No.:";
		cin>>n;
		f=1;
		for(i=1;i<=n;i++)
		f=f*i;
		cout<<"Factorial of "<<n<<"="<<f;
	}
};
int main()
{
	fact f;
	f.get();
}