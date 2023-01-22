//write a program to add the number of an array of size 10
#include<iostream>
using namespace std;

int main()
{
    int a[10],sum=0;
    cout<<"enter ten number"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    cout<<"the sum of ten number is"<<sum<<endl;
    return 0;
}
