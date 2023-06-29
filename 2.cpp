
 #include<iostream>
 using namespace std;
 int main()
{
    int unit; 
    
      cout<<"Enter the unit of usage: ";
      cin>>unit;
      if(unit<=100){
            cout<<"Bill amount is: ";
    cout<<unit*5;
}
else if(unit<=200){
        cout<<"Bill amount is: ";
    cout<<(100*5)+(unit-100)*7;
}
else if(unit<=300){
    cout<<"Bill amount is: ";
    cout<<(100*5)+(100*7)+(unit-200)*10;
}
else if(unit>300){
    cout<<"Bill amount is: ";
    cout<<(100*5)+(100*7)+(100*10)+(unit-300)*15;
}
else{
    cout<<"Bill amount is: ";
    cout<<"No value";
}
    return 0;
}
