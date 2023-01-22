/*this concept says that what we want to show and what we do not want show
our screen */
#include<iostream>
using namespace std;


    class addition
    {
      //  public:
        int x,y;
    public :
        addition()
        {
            cout<<"Default constructor called"<<endl;
        }
        ~addition()
        {
            cout<<"Default Distructor called"<<endl;
        }
void setX(int a)
{
    if(a<0)
        x=-a;
    else
        x=a;
}
void setY(int b)
{
    y=b;
}
int getX()
{
    return x;
}
int getY()
{
    return y;
}

    };

int main()
{
    addition a,b;// Yh addition class ka object hai
addition *c=new addition();
    a.setX(-23);
    a.setY(24);
    cout<<a.getX()+a.getY()<<endl;

   // delete c;//yaha c delete nhi hoga c jes memory  ko point kr rha hai o space delete hoga
    return 0;
}


