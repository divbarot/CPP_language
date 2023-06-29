#include<iostream>
using namespace std;
class Div
{
    public:
    float phy,chem,bio,eng,com,total,per;
    void allmarks()
    {
        cout<<"enter physics marks : ";
        cin>>phy;
         cout<<"enter chemistry marks : ";
        cin>>chem;
         cout<<"enter biology marks : ";
        cin>>bio;
         cout<<"enter english marks : ";
        cin>>eng;
         cout<<"enter computer marks : ";
        cin>>com;
    }
    void guru()
    {
        total=phy+chem+bio+eng+com;
        cout<<"your total is: "<<total;
    }
    void percentage()
    {
        per=total/400*100;
        cout<<"your percentage is : "<<per;
    }
};
int main ()
{
    Div k;
    k.allmarks();
    k.guru();
    k.percentage();
}