#include<iostream>
using namespace std;
class complex 
{
    int real,ime;
    public:
    void setinfo(int r,int i)
    {
        real=r;
        ime=i;
    }
    void geinfo()
    {
        cout<<real<<"+"<<ime<<"i";
    }
    complex operator + (complex c)
    {
        complex temp;
        temp.real =real+c.real;
        temp.ime=ime+c.ime;
        return temp;
    }
};
int main()
{
    complex c1,c2,result;
    c1.setinfo(1,2);
    c2.setinfo(3,1);
    result=c1+c2;
    result.geinfo();
    return 0;
}