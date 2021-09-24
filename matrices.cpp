#include<iostream>
using namespace std;
int main()
{
    int arr[3][2];
    int arra[3][2];
    int arrc[3][2];
    cout<<"enter 6 numbers\n";

    for( int row = 0; row <3 ; row ++)
    {
        for(int col = 0; col < 2; col ++)
        {
            cin>>arr[row][col];
        }
    }
    cout<<"engter 6 numbers";
     for( int row = 0; row <3 ; row ++)
    {
        for(int col = 0; col < 2; col ++)
        {
            cin>>arra[row][col];
        }
    }
    cout<<"the addition is \n";
     for( int row = 0; row <3 ; row ++)
    {
        for(int col = 0; col < 2; col ++)
        {
            arrc[row][col]= arr[row][col] + arra[row][col];
        }
    }

    cout<<"the number are \n";
    for( int row = 0; row <3 ; row ++)
    {
        for(int col = 0; col < 2; col ++)
        {
            cout<<arrc[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;
}