#include<iostream>
using namespace std;
#include<stdio.h>
class student
{
    public:
    string name;
    int age;
    string address;

    public:
    student()
    {
        name = "unknown";
        age = 0;
        address = "not avabilable";

    }
    void setinfo(string n ,int a)
    {
        name = n;
        age  = a;
    }
    void setinfo(string n, int a,string ad)
    {
        name=n;
        age=a;
        address=ad;
    }

};
int main()
{
    student obs[2];
    int i;
    for(i =0;i<2 ;i++) 
    {
        string address,name;
        int age;
        cout<<"enter a name age and address\n";
        cin>>name>>age>>address;
        obs[i].setinfo(name,age,address);
    }  
    for(i=0 ;i<2 ;i++)
    {
        cout<<obs[i].name<<endl;
    }
  return 0;
}