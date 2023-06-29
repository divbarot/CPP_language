#include<iostream>
using namespace std;
class batsman
{
	int bcode;
	char name[20];
	int innings,notout,runs;
	int batavg;
	float calcavg()
	{
		return runs/innings-notout;
	}
	public:
void readdata()
{
	cout<<"enter bcode:";
	cin>>bcode;
	cout<<"enter name:";
	cin>>name;
	cout<<"enter innings:";
	cin>>innings;
	cout<<"enter notout:";
	cin>>notout;
	cout<<"enter runs:";
	cin>>runs;
	batavg=calcavg();
}
void displaydata()
{
	cout<<"\n";
	cout<<"bcode:"<<bcode<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"innings:"<<innings<<endl;
	cout<<"notout:"<<notout<<endl;
	cout<<"runs:"<<runs<<endl;
	cout<<"batavg:"<<batavg<<endl;
}
};
int main()
{
	batsman b;
	b.readdata();
	b.displaydata();
}