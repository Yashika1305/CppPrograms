#include<iostream>
using namespace std;
int main()
{
    int arr[5]; int n,flag=0;
    cout<<"Enter array elements";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number to search";
    cin>>n;
    for(int i=0;i<sizeof(arr);i++)
    {
        if(arr[i]==n)
        {
            cout<<"Element found";
            flag=1;
            break;
        } 
    }
    if(flag==0)
        cout<<"Element not found";
    return 0;
}