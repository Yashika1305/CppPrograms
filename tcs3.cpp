#include<iostream>
using namespace std;
int main()
{
int k = 5;
int *p = &k;
int **m = &p;
cout<< k<<" " <<*p<<" "<<**p; 
return 0;
}
