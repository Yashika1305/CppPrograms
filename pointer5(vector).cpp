#include<iostream>
#include<vector>
using namespace std;
void process(vector<int> *v)
{
	cout<<"Good";
}
int main()
{
	vector<int> v;
	for(int i=0;i<10;i++)
		v.push_back(i);
	process(&v);
	return 0;
}
