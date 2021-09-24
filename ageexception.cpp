#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age \n ";
    cin>>age;

    try
    {
        if(age<18)
        {
            throw(age);
        }
       cout<<"you are over 18\n";
    }
    catch( int age)
    {
       cout<<"you are a child\n";
    }
    
    return 0;
}