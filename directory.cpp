#include<iostream>
using namespace std;

class directory
{
    public:
    string name,address,head,number;
    int tnumber;

    void setinfo(string n,string a,int t,string nu,string h)
    {
        name = n;
        address = a;
        tnumber = t;
        number = nu;
        head = h;
    }

};
int main()
{
    directory d1;
    d1.setinfo("harsh","mumbai",7589,"7021901876","dad");
    cout<<d1.name<<endl<<d1.address<<endl<<d1.tnumber<<endl<<d1.number<<endl<<d1.head;
    return 0;
}