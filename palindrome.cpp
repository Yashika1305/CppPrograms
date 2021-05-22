#include<iostream>
using namespace std;
int main()
{
    int num,n,n1,rev=0;
    cout<<"Enter the number to check for palindrome";
    cin>>num;
    n=num;
    while(num!=0)
    {
        n1=num%10;
        rev=(rev*10)+n1;
        num=num/10;
    }
    cout<<"Reverse is:"<<rev;
    if(n==rev)
        cout<<"Number is palindrome";
    else
        cout<<"Number is not palindrome";
    return 0;
}