#include<iostream>
using namespace std;
#include<fstream>
int main()
{
    ifstream myfile("mess.txt");
   string line;
   while (getline(myfile,line))
   {
       cout<<line<<endl;
   }
   myfile.close();
   
   

return 0;
}