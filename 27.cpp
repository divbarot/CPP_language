
#include<iostream>
using namespace std;
class bank
{
  char name[100],add[100],y;
  int balance;
  public:
  void openacc();
  void deposit();
  void withdraw();
  void display();
};
void bank::openacc()
{
   	cout<<"enter your full name: ";
  	 cin.ignore();
  	 cin.getline(name,100);
  	 cout<<"\n enter your address: ";
  	 cin.getline(add,100);
  	 cout<<"\n what type of account you want to open saving (s) or current(c)";
  	 cin>>y;
 	  cout<<"enter your account for deposit : ";
  	 cin>>balance;
  	 cout<<"\n your acountis created";
}
	void bank::deposit()
{
 	int a;
	cout<<"how much you want to deposit : \t";
	cin>>a;
	balance+=a;
	cout<<"\n total balance deposited : \t"<<balance;
	cout<<"\n";
}
	void bank::withdraw()
{
	float amount;
	cout<<"enter amount to withdraw : \t";
	cin>>amount;
	balance-=amount;
	cout<<"\n total amount left :"<<balance;
	cout<<"\n";
}
	void bank::display()
{
	cout<<"\n ypur full name: "<<name;
	cout<<"\n your address:"<<add;
	cout<<"\n type of account that you open :"<<y;
	cout<<"\n account you deposit:"<<balance;
	cout<<"\n";
}
	int main ()
{
	bank b;
	int choice;
	do{
	cout<<"\n1.open account \n";
	cout<<"\n2.money deposit \n";
	cout<<"\n3.withdraw money \n";
	cout<<"\n4.display my ccount \n";
	cin>>choice;
	switch (choice)
{
	case 1:
	b.openacc();
	break;
		case 2:
		b.deposit();
		break;
	case 3:
	b. withdraw();
	break;
		case 4:
		b.display();
		default:
	cout <<" \n";
   }
}while (choice);
	return 0;
}