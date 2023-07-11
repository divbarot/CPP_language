#include<iostream>
using namespace std;
class base
{
	protected:
	int n;
	public:
	void setn()
	{
		cout<<"enter n:";
		cin>>n;
	}			
};
class base2
{
	protected:
	int j,i;
};
class dervied:public base,public base2
{
	public:
	void getn()
	{
	for(i=1;i<=10;i++)
	{
		j=i*n;
		cout<<n<<"*"<<i<<"="<<j<<endl;
	}
	}	
};
int main()
{
	 dervied d;
	d.setn();
	d.getn();
