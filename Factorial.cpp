#include<iostream>
using namespace std;

int factorial(int num)
{
    int result = 1;
    while (num !=1)
    {
       result=result *num;
       num--;
    }
    
    return result;
}

int main()
{
   int res;
   res = factorial(5);
   cout<<"the res is "<<res;



    return 0;
}