#include<iostream>
using namespace std;
int main()
{
    int sal,year,bonus,amount;
    cout<<"enter a sal and year\n";
    cin>>sal>>year;


    if(year>5)
    {
         bonus=(5*sal)/100;
         amount= bonus+sal;


    }
    else
    {
        cout<<"sorry";
    }
    cout<<"the total is"<<amount;
    return 0;
}