#include<iostream>
using namespace std;
int main()
{
    int i=5, j= 5;
    j=i++ + ++i + i++ - --i - i-- + ++i;
    cout<<i<<" "<<j;
    return 0;
}