#include<iostream>
using namespace std;
int main()
{
	int *p1;
	double *p2;
	string p3;
	char p4;
	cout<<(sizeof *p1)<<" ";
	cout<<(sizeof *p2)<<" ";
	cout<<(sizeof p3)<<" ";
	cout<<(sizeof p4)<<" ";
	int x=0;
	cout<<sizeof x<<" ";
	return 0;
}
