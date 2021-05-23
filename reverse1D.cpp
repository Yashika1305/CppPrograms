#include<iostream>
using namespace std;
int main()
{
    int arr[4],i;
    cout<<"Enter array elements";
    for(i=1;i<=4;i++)
    {
        cin>>arr[i];
    }
    for(i=4;i>=1;i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}    