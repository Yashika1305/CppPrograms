#include<iostream>
using namespace std;
int find(int arr[],int n,int x)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
			return 1;
	}
	return -1;
   
}
int main()
{
	int arr[]={15,6,89,14,57};
	int n=5,x=1;
	cout<<find(arr,n,x);
	return 0;
	
}
