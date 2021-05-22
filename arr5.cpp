#include<iostream>
using namespace std;
int insert(int arr[],int n)
{
	int i,count=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			swap(arr[i],arr[count]);
			count++;
		}	
	}
	return 1;
}
int main()
{
	int arr[]={8,5,0,10,0,20,0};
	int n=sizeof(arr);
	cout<<insert(arr,n);
	return 0;
}
