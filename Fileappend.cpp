#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	char a[20]={"AKASH"};
    ofstream ob;  
    ob.open ("student.txt", ios::app);
    ob<<a;
    cout<<"Data has been appended to file";
    ob.close(); 
}