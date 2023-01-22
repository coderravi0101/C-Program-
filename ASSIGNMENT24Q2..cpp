
#include<iostream>
using namespace std;


class primeNumber
{
public :
    int n;

    void checkprimeNumber();//this is a function
void findMaxDigit()
{
    int max=-1;
    while(n!=0)
    {
        int rem=n%10;
        if(rem>max)
            max= rem;
        n=n/10;
    }
    cout<<"max digit is"<<max<<endl;
}

};
 void primeNumber::checkprimeNumber()/*DECLARETHE FUNCTION
 AND USE DOUBLE COLLEN OR :: SYMBOL*/
 {
        int flag = 0;
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"The number is prime"<<endl;
        else
        cout<<"The number is not prime"<<endl;

    }
int main()
{
    primeNumber a;//this is object
    cout<<"enter a number"<<endl;
    cin>>a.n;

    a.findMaxDigit();

    return 0;
}



