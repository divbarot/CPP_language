#include<iostream>
using namespace std;
class abc
{
    protected:
    int a;
    public:
    void seta()
    {
        cout<<"enter a:";
        cin>>a;
    }
};
class pqr: public abc
{
    protected:
    int b;
    public:
    void setb()
    {
        cout<<"enter b: ";
        cin>>b;
    }
};
class xyz : public pqr
{
    int c,add;
    public:
    void setc()
    {
        cout<<"enter c: ";
        cin>>c;
    }
    void get()
    {
        cout<<"addition of a,b and c is: "<< a+b+c<<endl;
    }
};
int main()
{
    xyz x;
    x.seta();
    x.setb();
    x.setc();
    x.get();
}