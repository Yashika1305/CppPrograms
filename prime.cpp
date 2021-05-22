#include<iostream>
using namespace std;
int main()
{
	int n,i,j,a=1,b=1,c,m,k;
	cout<<"Enter the value of n""\n";
	cin>>n;
	for(k=1;k<=n;k++)
	{
		if(k%2==0)
		{
		for(int i=1;i<n;i++)
		{
			if(i==1 || i==0)
				continue;
			int flag=1;
			for(j=2;j<=i/2;++j)
			{
				if(i%j==0)
				{
					flag=0;
					break;
				}
			}
		if(flag==1)
			cout<<i<<" ";
		}
		}
		else
		{
			cout<<a<<" ";
			for(m=1;m<n/2;m++)
			{
				c=a+b;
				a=b;
				b=c;
				cout<<" "<<c;
			}
		}
	}
	return 0;
}
