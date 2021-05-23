#include<iostream>
using namespace std;
void printRep(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[abs(arr[i])]>=0)
            arr[abs(arr[i])]=-arr[abs(arr[i])];
        else
            cout<<abs(arr[i])<<" ";
    }
}
int main()
{
    int arr[]={1,1,2,2,3,3,5,4,5,4,6,7,8,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    printRep(arr,n);
    return 0; 
}