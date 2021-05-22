#include<iostream>
using namespace std;
int main()
{
	int x=10;
	int* ptr=&x;
	cout<<*ptr<<" ";
	cout<<ptr<<" "; 
	cout<<&ptr;
	return 0;
}
