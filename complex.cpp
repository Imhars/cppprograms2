#include<iostream>
using namespace std;
class complex
{
    int real,ime;
    public:
    void setdata(int x,int s)
    {
        real=x;
        ime=s;
    }
    void showdata()
    {
        cout<<real<<"+"<<ime<<"i";
    } 
    complex add(complex c)
    {
        complex temp;        
        temp.real = c.real + real;
        temp.ime =c.ime + ime;
        return temp;       
    }
};
int main()
{
    complex c1,c2,result;
    c1.setdata(5,2);
    c2.setdata(3,2);
    result=c1.add(c2);
    result.showdata();
    return 0;
}