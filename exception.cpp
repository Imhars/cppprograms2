#include<iostream>
using namespace std;
int main()
{
    int a=10,b=0,c;
    try
    {
        if(b==0)
        {
            throw(b);
        }
        c=a/b;
        cout<<"the value of c is :"<< c;
    }
    catch(int b)
    {
        cout<<"learn maths my friend";
    }
    

    
    return 0;
}