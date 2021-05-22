#include<iostream>
using namespace std;
void add(int a, int b)
{
	cout<<a+b;
}
int main()
{	int x, y;
	cout<<"Enter the value of x";
	cin>>x;
	cout<<"Enter the value of y";
	cin>>y;
	add(x,y);
	return 0;
}
