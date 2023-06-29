[8:50 pm, 21/06/2023] Diya💞: Kyaa
[8:50 pm, 21/06/2023] Keni Sk: Okk
[8:50 pm, 21/06/2023] Diya💞: Okk
[8:50 pm, 21/06/2023] Diya💞: Bye
[8:50 pm, 21/06/2023] Keni Sk: Byee
[9:50 am, 22/06/2023] Keni Sk: #include<iostream>
using namespace std;
int main()
{
int a,bill ;
cout<<"Enter the UNIT:";
cin>>a;

	if(a<=100)
	{
		bill = 50 + a*0.6;
		cout<<"Your BILL is "<<bill;
		cout<<" rs per unit.";
	}
	else if(100<a && a<=300)
	{
		bill = 50 + 60+ (a-100)*0.8;
	     cout<<"Your BILL is "<<bill;
	     cout<<" rs per unit";
	}
	else 
	{
		bill = 50 + 60 + 160 + (a-300)*0.9;     
		cout<<"Your BILL is "<<bill;
		cout<<"re per unit";
	}

	if(bill>300)
	{
		bill = bill + (bill*0.15);
        cout<<"\nYour BILL is %d "<<bill;
        cout<<" rs per unit with 15% bill";
	}

   return 0;
}
[9:53 am, 22/06/2023] Keni Sk: #include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=1;j--)
		{
			cout<<" "<<i;
		}
		cout<<"\n";
	}
	return 0;
}
[9:53 am, 22/06/2023] Keni Sk: #include<iostream>
using namespace std;
int main()
{
	int i,j,a=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			cout<<" "<<a;
			a++;
		}
		a=a+5;
		cout<<"\n";
	}
	return 0;
}
[9:54 am, 22/06/2023] Keni Sk: #include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=65;i<=69;i++)
	{
		for(j=65;j<=i;j++)
		{
			cout<<" "<<char(j);
		}
		cout<<"\n";
	}
	return 0;
}
[9:54 am, 22/06/2023] Keni Sk: #include<iostream>
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
[9:54 am, 22/06/2023] Keni Sk: #include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			cout<<" "<<j;
		}
		cout<<"\n";
	}
	return 0;
}
[8:54 am, 23/06/2023] Diya💞: Je karya hoy e badha 5 mokl je
[8:54 am, 23/06/2023] Diya💞: Badha topic na
[9:04 am, 23/06/2023] Keni Sk: #include<iostream>
using namespace std;
int main()
{
	int a[5],i,evensum=0,oddsum=0,totalsum=0;
	for(i=0;i<5;i++)
	{
		cout<<"enter val a: ";
		cin>>a[i];
	}
	for(i=0;i<5;i++)
	{
		if(i%2==0)
		{
			evensum+=a[i];
		}
		else
		{
			oddsum+=a[i];
		}
		totalsum=evensum+oddsum;
	}
	cout<<" \n evensum ="<<evensum;
	cout<<"\n oddsum="<<oddsum;
	cout<<"\n totalsum="<<totalsum;
	return 0;
}
[9:04 am, 23/06/2023] Keni Sk: #include<iostream>
using namespace std;
int main()
{
	int a[5][5],i,j,b[5][5],c[5][5];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"enter val a:";
			cin>>a[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"enter val b:";
			cin>>b[i][j];
		}

	}
	cout<<"matrixa\t\tmatrixb\t\tsum";
	for(i=0;i<3;i++)
	{
		cout<<"\n";
		for(j=0;j<3;j++)
		{
			cout<< a[i][j];
		}
		cout<<"\t\t";
		for(j=0;j<3;j++)
		{
			cout<< b[i][j];
		}
			cout<<"\t\t";
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			cout<< c[i][j];
		}
	}
	return 0;
}
[9:04 am, 23/06/2023] Keni Sk: #include<iostream>
using namespace std;
int main()
{
	int i,j,a[5][5],b[5][5],total=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"enter val a:";
			cin>>a[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"  "<<a[i][j];
		}
		cout<<"\n";
	}
	cout<<"uper triangle total\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i<j)
			total+=a[i][j];
		}
	}
	cout<<""<<total;
	return 0;
}
[9:04 am, 23/06/2023] Keni Sk: #include<iostream>
using namespace std;
int main()
{
	int i,j,a[5][5],b[5][5],total=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"enter val a:";
			cin>>a[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"  "<<a[i][j];
		}
		cout<<"\n";
	}
	cout<<"lower triangle total\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i>j)
			total+=a[i][j];
		}
	}
	cout<<" "<<total;
	return 0;
}
[9:04 am, 23/06/2023] Keni Sk: #include<iostream>
using namespace std;
int main()
{
	int i,j,a[5][5],b[5][5],total=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"enter val:";
			cin>>a[i][j];
		}
	}
	cout<<"sparse matrix\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		if(a[i][j]==0)
			cout<<" ";
		else
			cout<<a[i][j];
		}
		cout<<"\n";
	}
	return 0;
}