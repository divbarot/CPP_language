#include <iostream> 
using namespace std;
int main()
{
    float days, years, weeks;
    cout<<"Enter the value of days:";
    cin>>days; 
    years = days/365; 
    weeks = days/7;
    days = days;

    cout<<"Years: \n"<<years;
    cout<<"Weeks: \n"<<weeks;
    cout<<"Days:  \n"<< days;

    return 0;
}