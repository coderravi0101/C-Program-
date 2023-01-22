/*this concept says that what we want to show and what we do not want show
our screen */
#include<iostream>
using namespace std;


    class addition
    {
      //  public:
        int x,y;
    public :
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
    addition a;//object of addition class

    a.setX(-23);
    a.setY(24);
    cout<<a.getX()+a.getY()<<endl;
    return 0;
}
