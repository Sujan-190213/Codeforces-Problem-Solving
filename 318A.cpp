#include<iostream>
using namespace std;

int main()
{
    long long number,position,partion,output;

    cin>>number>>position;

    if(number%2==0)
    {
        partion=number/2;
    }
    else
    {
        partion=(number+1)/2;
    }

    if(position<=partion)
    {
        output=(2*position)-1;
    }
    else
    {
        output=(position-partion)*2;
    }

    cout<<output<<endl;


    return 0;
}
