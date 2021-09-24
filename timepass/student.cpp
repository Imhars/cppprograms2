#include<iostream>
using namespace std;
int main()
{
    float ch,ca,per,perattend;
    cout<<"enter a class held and class attended\n";
    cin>>ch>>ca;
    per =(75*ch)/100;
    perattend=(ca/ch)*100;
    if(ca>per)
    {
       cout<<"YOU ARE ALLOWED \n";
    }
    else
    {
        cout<<"NOT ALLOWED \n";
    }
    cout<<"YOU ATTENDED "<<perattend<<" % \n";
    return 0;
}