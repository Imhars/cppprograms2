#include<iostream>
using namespace std;
class student
{
    protected:
    string name;
    int roll;
};
class test:public student
{
    protected:
    int marks;
    public:
    void read()
    {
        cout<<"enter name roll and marks\n";
        cin>>name>>roll>>marks;
    }
};
class sport
{
    protected:
    int score;
    public:
    void show()
    {
        cout<<"enter score";
        cin>>score;
    }
};  
class result:public test,public sport
{
    private:
    int total;
    public:
    void cal()
    {
        this->total =marks +score;
    }
    void display()
    {
        cout<<"the total is "<<this->total;
    }

};
int main()
{
    result r1;
    r1.read();
    r1.show();
    r1.cal();
    r1.display();
    return 0;
}