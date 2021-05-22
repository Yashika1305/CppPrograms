#include<iostream>
#include<vector>
using namespace std;
int main()
{	
	int n=6;
	//vector<int> v(n,5);
	vector<int> v{12,34,56,7,8,4};
	for(auto x:v)
		cout<<x<<" ";
	return 0;
}

