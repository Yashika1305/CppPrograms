#include<iostream>
using namespace std;
int main()
{
    int n,i,flag=0;
    cout<<"Enter the number to check prime";
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"Not Prime";
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"Prime";
    return 0;
}