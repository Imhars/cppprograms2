#include<iostream>
using namespace std;
class employ
{
    int sal,hour;
    public:
    void getinfo(int s,int h)
    {
        sal = s;
        hour = h;
    }
    void addsal()
    {
        if(sal<500)
        {
            sal =sal +10;
        }
    }
    void addwork()
    {
        if(hour>6)
        {
            sal =sal+5;
        }
    }
    void display()
    {
        cout<<"the sal is"<<sal;
    }

};
int main()
{
    employ e1;
    e1.getinfo(10,9);
    e1.addsal();
    e1.addwork();
    e1.display();

    return 0;
}