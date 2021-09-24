#include<iostream>
using namespace std;
class print
{
    public:
    void getinfo(int n,char c)
    {
        cout<<  n  <<  c  <<endl;
    }
    void getinfo(char c,int n)
    {
        cout<<  n  <<  c<<endl;
    }
};
int main()
{
    print p1;
    p1.getinfo(2,'a');
    p1.getinfo('b',6);
    return 0;
}