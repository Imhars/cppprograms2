#include<iostream>
using namespace std;
class vikas
{
    public:
    int n;
    void show()
    {
    cout<<"called\n";
    }
};
int main()
{
    vikas *p2 = new vikas;
    vikas **ptr = &p2;

    cout<<"*ptr "<<*ptr<<endl;

    return 0;
}