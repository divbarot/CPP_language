#include <iostream>
using namespace std;

int main() {

   const double TAX_RATE = 0.10;
   int  sandwich  =500,onionrings=100, avcadotost =800,arabiatapasta =300,frenchtost =500,chipotlesalad =400 ,taxAmount=0,Cost3,Cost4,Cost5,Cost6,Cost2,Cost1,totalCost,discount=0,grandtotal=0,quntity,tCost,quntity1,quntity2,quntity3,quntity4,quntity5,quntity6;
   
   int choice = 0;
   char n[20];
   int m;

   cout<<"\nWelcome to vanijeya :)" << endl;
   
     cout<<"-------------------------------------"<<endl;
 
   cout<<"\nEnter your name : ";
   cin>>n;
   cout<<"Enter your mobile no. : ";
   cin>>m;
   
    cout<<"-------------------------------------"<<endl; 
  
  cout<<"1. sandwich and nachoes        500"<<endl;
   cout<<"2. onion rings                 600"<<endl;
   cout<<"3. avcado tost                 800"<<endl;
   cout<<"4.arabiata pasta               900"<<endl;
   cout<<"5.french tost                  500"<<endl;
   cout<<"6.  chipotle salad             400"<<endl;
   cout<<"7. Exit" << endl;

   do
   {  
       cout <<"Select items: ";
       cin >> choice;
  cout<<"-------------------------------------"<<endl;
      switch (choice) {
         case 1:
            cout<<"enter quntity:"<<endl;
            cin>>quntity1;
            Cost1=sandwich *quntity1;
             cout<<"iteam"<<"\t""\t";cout<<"quntity"<<"\t""\t"; cout<<"cost""\t""\t"<<endl; 
             cout<<"sandwich "<<"\t"<<"\t"; cout<<quntity1<<"\t""\t"; cout<<Cost1<<endl;
            break;
         case 2:
            cout<<"enter quntity:"<<endl;
            cin>>quntity2;
            Cost2=onionrings*quntity2;
            cout<<"iteam"<<"\t""\t";cout<<"quntity"<<"\t""\t"; cout<<"cost""\t""\t"<<endl; 
            cout<<"onion rings"<<"\t"<<"\t"; cout<<quntity2<<"\t""\t"; cout<<Cost2<<endl;
            break;   
            
         case 3:
            cout<<"enter quntity:"<<endl;
            cin>>quntity3;
            Cost3=avcadotost *quntity3;
            cout<<"iteam"<<"\t""\t";cout<<"quntity"<<"\t""\t"; cout<<"cost""\t""\t"<<endl; 
            cout<<"avcado tost "<<"\t"<<"\t"; cout<<quntity3<<"\t""\t"; cout<<Cost3<<endl;
            break;  
         case 4:
            cout<<"enter quntity:"<<endl;
            cin>>quntity4;
            Cost4=arabiatapasta*quntity4;
            cout<<"iteam"<<"\t""\t";cout<<"quntity"<<"\t""\t"; cout<<"cost""\t""\t"<<endl; 
            cout<<"arabiata pasta"<<"\t"<<"\t"; cout<<quntity4<<"\t""\t"; cout<<Cost4<<endl;
            break;  
         case 5:
            cout<<"enter quntity:"<<endl;
            cin>>quntity5;
            Cost5=frenchtost  *quntity5;
            cout<<"iteam"<<"\t""\t";cout<<"quntity"<<"\t""\t"; cout<<"cost""\t""\t"<<endl; 
            cout<<"french tost  "<<"\t"<<"\t"; cout<<quntity5<<"\t""\t"; cout<<Cost5<<endl;
            break;  
         case 6:
            cout<<"enter quntity:"<<endl;
            cin>>quntity6;
            Cost6= chipotlesalad *quntity6;
            cout<<"iteam"<<"\t""\t";cout<<"quntity"<<"\t""\t"; cout<<"cost""\t""\t"<<endl; 
            cout<<" chipotle salad "<<"\t"<<"\t"; cout<<quntity6<<"\t""\t"; cout<<Cost6<<endl;
            break;  
         case 7:
            break;
         default:
            cout<<"  Invalid choice. Please try again." << endl;
            break;
      }
   } while(choice != 7);
    cout << "\nCustomer name : "<<n<<endl;
   cout << "Customer mobile no. : "<<m<<endl;
   cout<<"iteam"<<"\t""\t";cout<<"quntity"<<"\t""\t"; cout<<"cost""\t""\t"<<endl; 
     cout<<"-------------------------------------"<<endl;
 
   if(Cost1>0)
   {
        cout<<"sandwich"<<"\t"<<"\t"; cout<<quntity1<<"\t""\t"; cout<<Cost1<<endl;
   }if(Cost2>0)
   {
       cout<<"onion rings"<<"\t"<<"\t"; cout<<quntity2<<"\t"; cout<<Cost2<<endl;
   }if(Cost3>0)
   {
       cout<<"avcado tost "<<"\t"<<"\t"; cout<<quntity3<<"\t""\t"; cout<<Cost3<<endl;
   }if(Cost4)
   {
       cout<<"arabiata pasta "<<"\t"<<"\t"; cout<<quntity4<<"\t""\t"; cout<<Cost4<<endl;
   }if(Cost5)
   {
       cout<<"french tost "<<"\t"<<"\t"; cout<<quntity5<<"\t""\t"; cout<<Cost5<<endl;
   }if(Cost6)
   {
     cout<<"chipotle salad "<<"\t"<<"\t"; cout<<quntity6<<"\t""\t"; cout<<Cost6<<endl;
   }
  cout<<"-------------------------------------";
 
   totalCost=Cost1+Cost2+Cost3+Cost4+Cost5+Cost6;

   taxAmount =totalCost* TAX_RATE;
   tCost = taxAmount+totalCost;
   cout<<"------------------------------------"<<endl;
   cout << "totalCost"<<"\t"<<"\t"<<"\t"<<totalCost<<endl;
   cout << "Tax Amount"<<"\t"<<"\t"<<"\t"<<taxAmount<<endl;
   cout<<"without discount"<<"\t"<<"\t"<<tCost<<endl;

  cout<<"-------------------------------------";
 
     cout<<"------------------------------------"<<endl;
     cout<<"Your total with discount is"<<"\t"<<grandtotal << endl;
     cout<<"------------------------------------"<<endl;
    cout<<"\n  THANK YOU FOR COMMING HERE  "<<endl;

 return 0;
}