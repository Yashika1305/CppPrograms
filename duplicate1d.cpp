#include<iostream>
using namespace std;
int check_dup(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                cout<<arr[i]<<" ";
           }
        }
    }
    cout<<"\n";
    return count;
}
int main()
{
    int arr[]={1,1,2,2,3,3,5,4,5,4,6,7,8,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<check_dup(arr,n);
    return 0; 
}