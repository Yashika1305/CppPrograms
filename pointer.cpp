#include<iostream>
using namespace std;
int main()
{
	int V=10;
	int *ptr=&V;
	cout<<"Value of V"<<*ptr<<endl;
	cout<<"Addressof V"<<ptr<<endl;
}
