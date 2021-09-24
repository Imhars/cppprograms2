#include<iostream>
using namespace std;

class student
{
    static int roll;
    int average;
    int rollno;
    int sub1,sub2,sub3;
    public:
    void setdata()
    {

        rollno  = ++roll; 
        cout<<"enter subject marks\n";
        cin>>sub1>>sub2>>sub3;
        average= (sub1 +sub2 +sub3 )/3;
    }

    void getinfo()
    {
        cout<<"the roll and marks are"<<endl<<rollno<<endl<<sub1<<endl<<sub2<<endl<<sub3<<endl;
        cout<<" average :"<<average;
    }

};

int student::roll=0;
int main()
{
 student obs[2];
 for( int i=0 ;i<2 ;i++)
 {
     obs[i].setdata();
 }
 for( int i=0 ;i<2 ;i++)
 {
     obs[i].getinfo();
 }
 

    return 0;
}