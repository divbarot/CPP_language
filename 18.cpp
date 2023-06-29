[8:53 am, 28/06/2023] Keni Sk: Welcome 😊
[9:26 am, 28/06/2023] Keni Sk: #include<iostream>
using namespace std;
class student{
	private:
	int no;
	char name[20];
	float eng,maths,science;
	float total;
	float ctotal()
	{
		return eng+science+maths;
	}
	public:
void takedata()
{
		cout<<"enter adm no:";
		cin>>no;
		cout<<"enter name:";
		cin>>name;
		cout<<"enter english marks:";
		cin>>eng;
		cout<<"enter maths marks:";
		cin>>maths;
		cout<<"enter science marks:";
		cin>>science;
		total=ctotal();
}
void showdata()
{
	cout<<"\n";
	cout<<"Admin no:"<<no<<endl;
	cout<<"Name:"<<name<<endl;
	cout<<"maths marks:"<<maths<<endl;
	cout<<"English marks:"<<eng<<endl;
	cout<<"science marks:"<<science<<endl;
}
};
int main()
{
	 student a;
	a.takedata();
	a.showdata();
}