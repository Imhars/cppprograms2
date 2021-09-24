#include<iostream>
using namespace std;
int main()
{
    int max,min,sum=0,average =0;

    int list[5]={4,8,6,7,3};

    max=list[0];

    for( int i=0 ;i<5 ;i++)
   {
       if(list [i] > max)
       {
           max=list[i];
       }
       else
       {
           min=list[i];
       }

       sum = sum + list[i];;

       
   }
   average = sum %5;
   
   cout<<"the largest is "<<max<<endl;
   cout<<"the smallest is "<<min<<endl;
   cout<<"the sum is "<<sum<<endl;
   cout<<"thge average is "<<average<<endl;
        
    return 0;
}