#include<iostream>
using namespace std;
int main()
{
    int num,result,r;
     
     cout<<"enter a number ";
     cin>>num;

     while(num>0)
     {
         r=num % 10;
         result =result + r;
         num = num/10;
     }
     cout<<"the addition is "<<result;
    return 0;
}