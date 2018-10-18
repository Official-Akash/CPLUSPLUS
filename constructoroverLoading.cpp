#include<iostream>
using namespace std;
class Overclass
{
  public:
	int x;
	int y;
	  Overclass()
	{
		x = y = 0;
	}
	Overclass(int a)
	{
		x = y = a;
	}
	Overclass(int a, int b)
	{
		x = a;
		y = b;
	}
};
int main()
{
	Overclass A;
	Overclass A1(4);
	Overclass A2(8, 12);
	cout << "Overclass A's x,y value==>"<< A.x << "," << A.y << "\n";
	cout << "Overclass A1's x,y value==>" << A1.x << "," << A1.y << "\n";
	cout << "Overclass A2's x,y value==>" << A2.x << "," << A2.y << "\n";
	return 0;
}