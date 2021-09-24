#include<iostream>
using namespace std;
class polygon
{
    protected:
    float h, w;
    public:
    void read()
    {
        cout<<"enter a h and w\n";
        cin>>h>>w;
    }
};
class Display
{
    public:
    float area;
    public:
    void show()
    {
        cout<<"the area  is "<<this->area;
    }
};
class reactange:public polygon, public Display
{
    public:
    void sum()
    {
        area =h *w;
    }
};

class triangle:public polygon,public Display
{
    public:
    void sum2()
    {
        area =0.5 *w *h;
    }
   
};

int main()
{
    reactange r1;
   r1.read();
   r1.sum();
   r1.show();
   triangle t1;
   t1.read();
   t1.sum2();
   t1.show();
    return 0;
}