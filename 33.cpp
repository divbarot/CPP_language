#include<iostream>
using namespace std;
class base
{
    protected:
    int m;
    public:
    void setm()
    {
        cout<<"enter m :";
        cin>>m;
    }
};
class derived1:public base
{
    int n;
    public:
    void setn()
    {
        cout<<"enter n : ";
        cin>>n;
    }
    void addition()
    {
        cout<<"addition of m and n is : "<<m+n<<endl;
    }
};
class derived2 : public base 
{
    int n;
    public:
    void setn()
    {
        cout<<"enter n:";
        cin>>n;
    }
  void product()
  {
    cout<<"product of m and n is:"<<m*n<<endl;
  }
};
int main ()
{
    derived1 d;
    d.setm();
    d.setn();
    d.addition();
    
    derived2 b;
    b.setm();
    b.setn();
    b.product();
}