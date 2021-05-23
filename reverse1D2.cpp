#include<iostream>
using namespace std;
void printArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<"\n";
}
void reverse(int arr[],int start,int end)
{
    
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<"\n";
    printArr(arr,n);
    reverse(arr,0,4);
    printArr(arr,n);
    return 0;
}