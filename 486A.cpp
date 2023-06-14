#include<iostream>
using namespace std;
int main()
{
    long long number,ans;;
    cin>>number;
    if(number%2==0)
        ans=number/2;
    else
        ans=-(number+1)/2;

    cout<<ans<<endl;

   return 0;
}
