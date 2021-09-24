#include<iostream>
using namespace std;

int main()
{
    int num;
    bool flag = true;
    cout<<"Enter number \n";
    cin>>num;

    for(int i = 2 ; i< num; i++)
    {
        if( (num%i) == 0 )
        {
            flag = false;
            break;
        }
    }

    if(flag)
    {
        cout<<"It is a prime number \n";
    }
    else
    {
        cout<<"It is not prime number \n";
    }
    return 0;
}