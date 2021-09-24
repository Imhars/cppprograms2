#include<iostream>
using namespace std;
class degree
{
    public:
    string name;
    int sal,date;

    void setinfo(string n,int s,int d)
    {
        name =n;
        sal = s;
        date =d;
    }

};
int main()
{
    degree obs[2];
    for( int i=0 ;i<2 ;i++)
    {
         string name;
        int date,sal;
        cout<<"enter a name date and sal\n";
        cin>>name>>date>>sal;
        obs[i].setinfo(name,date,sal);

    }
    for( int i=0 ;i<2 ; i++)
    {
        cout<<"---------------------------"<<endl;
        cout<<obs[i].name<<endl;
        cout<<obs[i].sal<<endl;
        cout<<obs[i].date<<endl;
    }
    return 0;
}