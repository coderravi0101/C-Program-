#include<iostream>
using namespace std;

class addition
{
    public:
    int x,y;
    addition(int a,int b)//this is a parameteritics  constructor
    {
        x=a;
        y=b;
    }
int add()  //make a function of add name ka
{
return x+y; //yaha x aur y ke value ko return kra rhe hai
}
};

int main()
{
  /* int a,b;
  cout<<"enter two number"<<endl;
  cin>>a>>b;
  aur neche 4 aur 5 ke place pr variable rekh dete jo hum lete
  jesa esme a,b le rhe hai*/
    addition *p=new addition(4,5);//DMA HELP
    int z=p->add(); //yaha jo function call kea the usi ko print kra rhe hai

    cout<<"Addition of "<<p->x<< " and " <<p->y<< " is = " <<z<<endl;
    return 0;
}