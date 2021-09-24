#include<iostream>
using namespace std;
int main()
{
    int num;
    bool flag=false;
    cout<<"enter 10 number";
    int list[10];
    for(  int i=0 ;i<10;i++)
    {
        cin>>list[i];
    }

cout<<"enter a number ";
cin>>num;

for( int i=0 ;i<10 ;i++)
{
    if(num==list[i])
    {
      flag=true;
      break;
    }
}
if(flag)
{
    cout<<"it is present";
}
else
{
    cout<<"it is not present";
}

    return 0;
}