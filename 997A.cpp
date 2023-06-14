#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin >>a >>b;
    for(int i=0;i<b;i++)
    {
        int remainder=a%10;
        if(remainder != 0)
            a--;
        else
            a=a/10;
    }
    cout<<a;

    return 0;
}
