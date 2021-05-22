#include<iostream>
#include<numeric>
using namespace std;
int main()
{
	int arr[]={1,5,3,6,8,34};
	int n=sizeof(arr)/sizeof(arr[0]);
	int s=0;
	s=accumulate(arr,arr+n,s);
	cout<<s;
}
