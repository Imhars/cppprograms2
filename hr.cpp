#include<iostream>
using namespace std;
class staff
{
    protected:
    int id;
    string name;
    public:
    void info()
    {
    cout<<" enetr your id ";
    cin>>id;
    cout<<" enter your name";
    }
};
class teacher :public staff
{   protected:
    int exp;
    char sub;
    public:
    void read()
    {
        cout<<" Enter your subject and experience "<<endl;
        cin>>sub>>exp;
    }

};
class typist:public staff
{   protected:
    int speed,exp;
    public:
    void read2()
    {
        cout<<" Enter your speed and experience "<<endl;
        cin>>speed>>exp;
    }
};
class officer: public staff
{   protected:
    float gra;
    string depart;
    void read3()
    {
        cout<<" Enter your grade and department "<<endl;
        cin>>gra>>depart;
    }

};
class regular: public typist, public staff
{   int sal;
    cout<<" Enter your salary" ;
    cin>>sal;
};
class casual:public typist,public staff
{   


};