#include<iostream>
using namespace std;
int main()
{
	int arr[]={555,78,97,56,21,444,108};
	int max=arr[0];
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
		if(arr[i]>max)
		max=arr[i];
	cout<<"Max number in the array is:"<<max;
	
return 0;	
}

