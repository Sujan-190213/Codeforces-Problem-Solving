#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,y;
    cin>>x;
    if(x%5==0)
        y = x/5;
    else
       y = (x/5)+1;
    cout<<y<<endl;

    return 0;
}
