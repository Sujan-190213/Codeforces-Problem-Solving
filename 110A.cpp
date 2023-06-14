#include<iostream>
#include<string>
using namespace std;

int main()
{
    string number;
    cin>> number;
    int cnt=0;
    for(int i=0;i<number.length();i++)
    {
        if(number[i]=='4'||number[i]=='7')
            cnt++;
    }
    if(cnt==4||cnt==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
