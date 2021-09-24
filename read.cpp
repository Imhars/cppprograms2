#include<iostream>
using namespace std;
#include<fstream>
int main()
{
    ifstream myfile("mix.cpp");
   string line;
   while (getline(myfile,line))
   {
       cout<<line<<endl;
   }
   myfile.close();
   
   

return 0;
}