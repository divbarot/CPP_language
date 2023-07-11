#include<iostream>
using namespace std;
class base
{
  
    public:
    base()
    {
        cout<<"base called...."<<endl;
    }
};
class ABC : public base
{
    public:
    ABC()
    {
        cout<<"ABC called...."<<endl;
    }
};
class xyz : public base
{
    public:
    xyz()
    {
        cout<<"xyz called...."<<endl;
        
    }
};
class pqr : public base
{
    public:
    pqr()
    {
        cout<<"pqr called...."<<endl;
        
    }
};
int main ()
{
    pqr p;
}
