#include<iostream>
using namespace std;
int main()
{
	int i,j,l=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			l++;
			if(j%2==0)
			{
				cout<<" "<<char(l+63);
			}
			else
			{
				cout<<" "<<char(l+95);
			}
		}
		cout<<"\n";
	}
	return 0;
}