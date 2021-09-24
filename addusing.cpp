#include<iostream>
using namespace std;
class Data
{
    protected:
    int p,c,m;
    public:
    void read()
    {
        cout<<"enter marks of p c and m\n";
        cin>>p>>c>>m;
    }
};
class Sum:public Data
{
    protected:
    int total;
    public:
    void add()
    {
        total =p+c+m;
    }
};
class Display:public Sum
{
    public:
    void show()
    {
        cout<<this->total;
    }
};
int main()
{
    Display d1;
    d1.read();
    d1.add();
    d1.show();
    return 0;
}