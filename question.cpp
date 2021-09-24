#include<iostream>
using namespace std;
int main()
{
    int  age;
    char marital,gender;

   cout<<"enter age of employee ";

    cin>>age;

    cout<<"enter gender of employee ";

    cin>>gender;

    cout<<"marital status of employee ";
     cin>>marital;

     if(gender=='f')
    {
        cout<<"will work only in urban areas ";
    }
    else 
    {
        if(age>=20 && age<=40)
        {
            cout<<"employ will work any where "<<endl;
        }
        if (age>=40 && age<=60)
        {
            cout<<"employ can eork only in urban areas ";
        }  
    }
    
    return 0;
}