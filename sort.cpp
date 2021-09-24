#include<iostream>
using namespace std;
int main()
{
    int arr[5]={5,8,3,9,1};
    int length;
    int temp=0;
    
      cout<<"before sorting"<<endl;

for( int i=0 ;i<5 ;i++)
{
    cout<<arr[i]<<endl;
}
for(int i=0 ;i<5 ; i++)
{
    for(int j=0 ;j<5 ;j++)
    {
        if(arr[j] > arr[j+1])
        {
               temp = arr[j];    
               arr[j] = arr[j+1];    
               arr[j+1] = temp;  
        }
    }



}
cout<<"after sort \n";

  for (int i = 0; i <5; i++)
   {     
        cout<<arr[i]<<endl;
   }    

    return 0;
}