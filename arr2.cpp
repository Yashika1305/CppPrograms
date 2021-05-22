#include<iostream>
using namespace std;
int main()
{
	int arr[5],i;
	cout<<"size of array in this compiler is"<<sizeof(int)<<"\n";
	for(i=0;i<5;i++)
		cout<<"Address arr["<<i<<"] is"<<&arr[i]<<"\n";
	return 0;
}
