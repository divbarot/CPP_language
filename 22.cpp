#include<iostream>
using namespace std;
class Result
{
   int m,s,e;
   public:
   Result()
   {
    cout<<"Enter marks of Maths=";
    cin>>m;
    cout<<"Enter marks of Science=";
    cin>>s;
    cout<<"Enter marks of English=";
    cin>>e;
   }
   void Showdata()
   {
   cout<<"Marks of Maths="<<m<<endl;
   cout<<"Marks of Science="<<s<<endl;
   cout<<"Marks of English="<<e<<endl;
   cout<<"Total Marks="<<m+s+e<<endl;
   cout<<"Percentage="<<(m+s+e)/3<<endl;
   }
};
int main()
{
    Result r;
    r.Showdata();
}