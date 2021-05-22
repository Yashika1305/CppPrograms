#include<iostream>
using namespace std;
int add(int a,int b,int c=0,int d=0)
{
	return a+b+c+d;
}
int main()
{
	cout<<add(12,23)<<endl;
	cout<<add(5,5,5)<<endl;
	cout<<add(23,13,5,10);
}
