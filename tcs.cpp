#include<iostream>
using namespace std;
int main()
{
	int a=1,b=1,c,n;
	int odd=2,even=0;
	cout<<"n=";
	cin>>n;
	if(n>5 && n<=20)
	{
		cout<<a<<b;
		for(int i=1;i<n-2;i++)
		{
		
			c=a+b;
			a=b;
			b=c;
			cout<<c;
			if(c%2==0)
				even++;
			else
				odd++;
					
		}	
		cout<<"\n"<<even<<"\n"<<odd;
	}
	else
	{
		cout<<"invalid input";
	}
	return 0;
}
