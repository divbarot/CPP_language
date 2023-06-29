#include<iostream>
using namespace std;
int main()
{
	int i,j,n,sp=10;
	cout<<" enter n:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=1;j--)
		{
			if(i>=j)
				cout<<"* ";
			else
				cout<<" ";
		}
		sp--;
		cout<<"\n";
	}
	for(i=n-1;i>=1;i--)
	{
		for(j=n;j>=1;j--)
		{
			if(i>=j)
				cout<<"* ";
			else
				cout<<" ";
		}
		sp--;
		cout<<" \n";
	}
	return 0;
}