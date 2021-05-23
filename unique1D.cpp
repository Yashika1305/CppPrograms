#include<iostream>
using namespace std;
void unique(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j;
        for(j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                break;
            }
           
        }
         if(i==j)
            {
                cout<<arr[i]<<" ";
            }
    }
}
int main()
{
    int arr[]={1,23,2,4,1,3,5,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    unique(arr,n);
    return 0;
}