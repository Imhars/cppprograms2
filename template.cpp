#include<iostream>
using namespace std;
template <class X,class Y> 
void swap(X a,Y b)
{
    cout<<"before swap a: "<<a<<endl
    <<" b: "<<b<<endl;
    float c;
    c=a;
    a=b;
    b=c;
    cout<<"After swap a: "<<a<<endl
    <<" b: "<<b<<endl;
}


int main()
{

    swap(1.2,3.6);
    return 0;
}
