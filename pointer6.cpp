#include<iostream>
using namespace std;
void fun(int *ptr,int n)
{
	for(int i=0;i<n;i++)
		cout<<ptr[i]<<" ";

}
int main()
{
	int arr[]={10,20,30,40,50};
	fun(arr,5);
	return 0;
}
