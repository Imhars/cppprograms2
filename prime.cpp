#include<iostream>
using namespace std;
int main()
{
    int n;
    bool flag=true;

  cout<<"enter a number";
  cin>>n;

    for(int i=2 ;i<n ;i++)
    {
        if( (n%i )==0)
        {
            flag=false;
            break;
        }
    }
    if(flag==true)
    {
         cout<<"its a prim number";
    }
    else
    {
        cout<<"its not a prime number";
    }
   
    return 0;
}