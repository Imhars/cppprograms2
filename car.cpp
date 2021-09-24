#include<iostream>
using namespace std;
int main()
{
    char ch;

    cout<<"enter a character to find";
    cin>>ch;

    if(ch>='A' && ch<= 'Z')
    {
        cout<<"UPPER CASE ";
    }
    else
    {
      cout<<"LOWER CASE";
    }
    
    return 0;
}
