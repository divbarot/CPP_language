#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            cout<<  j;
        }
        cout<<" \n";
        
    }
    for(i=2;i<=5;i++)
    {
        for(j=5;j>=i;j--)
    {
        cout<<  j;
    }
    cout<<" \n";
    }
    return 0;
}