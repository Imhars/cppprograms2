#include<iostream>
using namespace std;

class complex
{
    public:
    int real,ime;

    void setinfo(int r,int i)
    {
        real = r;
        ime = i;
    }
    void getinfo()
    {
        cout<<real<<"-"<<ime;
    }

    complex operator +(complex c)
    {
        complex temp;
        temp.real =real-c.real;
        temp.ime=ime-c.ime;

    return temp;
    }


};

int main()
{
      complex c1,c2,result;
    c1.setinfo(8,6);
    c2.setinfo(4,1);
    result=c1+c2;
    result.getinfo();
    return 0;
}