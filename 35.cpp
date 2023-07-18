#include<iostream>

using namespace std;

int main()
{
	const int ITEMS = 11;
	string meals[ITEMS] = {"pizza","burger and fries","sandwich and nachoes","pasta","cheese_croissant","chinese platter","mexican platter","italiano","momos","vanijeya's favorits","deserts island"};
	int prices[ITEMS] = {500,200,300,250,150,550,600,650,350,1000,450};

	int orders[ITEMS] = {0};
	int orderNum;
	int n;	//number of meals to order
	int totalCost = 0;
	
	cout <<"welcome to vanijeya :)"<<endl;
	cout<<endl<<endl<<"\t\t\tMenu"<<endl<<endl;
	for(int i = 0; i < ITEMS; i++)
	{
		if(i%2 == 0) 
			cout<<endl;
		cout<<i+1<<" - "<<meals[i]<<"\t";
	}
	
	cout<<endl<<endl<<"How many meal you would like to order? "<< endl;
	cin>>n;
	
	for(int i = 0; i < n; i++)
	{
		cout<<"Enter item "<<i+1<<" : ";
		cin>>orderNum;
		totalCost += prices[orderNum-1];
		orders[orderNum -1] = 1;
	}
	
	cout<<endl<<"Your bill is "<<endl<<endl;
	
	cout<<"Meal item"<<"  "<<"Price"<<endl;
	cout<<"-----------------------"<<endl;
	for(int i = 0; i < ITEMS; i++)
	{
		if(orders[i] == 1)
			cout<<meals[i]<<"   "<<prices[i]<<endl;
	}
	cout<<endl<<"\t\t"<<"Total : "<<totalCost<<endl;
	cout<<"-----------------------"<<endl;
cout<<"thank u for comming here"<<endl;
	
	return 0;
}