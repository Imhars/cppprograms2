#include<iostream>
using namespace std;
class student
{
    protected:
    string name;
    int roll;
    public:
    void setdata(string n,int r)
    {
        name=n;
        roll=r;
    }
};
class test:virtual public student
{
    protected:
    int maths,physics;
    public:
    void setmarks(int m,int p)
    {
        maths=m;
        physics=p;
    }
    void print_marks()
    {
        cout<<"maths"<<maths<<endl
        <<"physics"<<physics<<endl;
    }

};
class sports: virtual public student
{
    protected:
    int score;
    public:
    void setscore(int s)
    {
        score=s;
    }
    void print_score()
    {
        cout<<"score :"<<score;
    }
};
class result:public test,public sports
{
    public:
    void display()
    {
        cout<<"-------------------------------"<<endl
        <<"the name:"<<name<<endl
        <<"maths :"<<maths<<endl
        <<"physics :"<<physics<<endl
        <<"score :"<<score<<endl
        <<"the total is "<<maths+physics+score<<endl
        <<"-------------------------------";
    }
};
int main()
{
    result r1;
    r1.setdata("harsh",1);
    r1.setmarks(21,35);
    r1.setscore(10);
    r1.display();
return 0;
}