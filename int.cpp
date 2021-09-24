#include<iostream>
using namespace std;

int countp(int arr[])
{
    int counter=0;

    for(int i=0;i<20;i++)
    {
        if(arr[i] > 0)
        {
            counter++;
        }
    }

    return counter;
}
int  countn(int arr[])
{
    int counter=0;

    for(int i=0;i<20;i++)
    {
        if(arr[i] < 0)
        {
            counter++;
        }
    }

    return counter;

}
int countodd(int arr[])
{
   int counter=0;

    for(int i=0;i<20;i++)
    {
        if(arr[i] % 2 !=0)
        {
            counter++;
        }
    }

    return counter;
}
int counte(int arr[])
{
   int counter=0;

    for(int i=0;i<20;i++)
    {
        if(arr[i] % 2 !=0)
        {
            counter++;
        }
    }

    return counter;
}
int count0(int arr[])
{
   int counter=0;

    for(int i=0;i<20;i++)
    {
        if(arr[i] ==0)
        {
            counter++;
        }
    }

    return counter;
}
int main()
{
    int num,pcount,ncount,ocount,ecout,ciout;
    cout<<"enter 20 number\n";
    int list [20];
    for(int i = 0 ; i<20;i++)
    {
        cin>>list[i];
    }
    pcount=countp(list);
    cout<<"positive :"<<pcount<<endl;
   
    ncount=countn(list);
    cout<<"negative"<<ncount<<endl;
   
    ocount=countodd(list);
    cout<<"odd:"<<ocount<<endl;

    ecout=counte(list);
    cout<<"even"<<ecout<<endl;

    ciout=count0(list);
    cout<<" number 0:"<<ciout<<endl;



    return 0;
}