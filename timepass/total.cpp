#include<iostream>
using namespace std;
int main()
{
    int discount,quantity,total;
    cout<<"enter a quantity \n";
    cin>>quantity;
    if(quantity>1000)
    {
       discount=(10*quantity)/100;
       total = quantity -discount;
    }
    else
    {
        total = quantity;
        
    }
    cout<<"the amount is "<<total;
    return 0;
}