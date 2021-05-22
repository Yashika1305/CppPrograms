#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,a,b,c;
	cout<<"enter the number of terms";
	cin>>n;
	for(i=0;i<n;i++)
	{
		
		if(n%2==0)
		{
			for(j=1;j<n/2;j++)
			{	
				if(i%j==0)
				cout<<i<<"\n";
			}
		}
		else
		{
			
			
			a=1;
			b=1;
			cout<<a<<" "<<b;
			for(k=1;k<n/2;k++)
			{
				c=a+b;
				a=b;
				b=c;
				cout<<c;
			}
		}
	}	
	return 0;
}
