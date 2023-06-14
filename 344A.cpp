#include<iostream>
#include<string>
using namespace std;

int main()
{
    int number,cnt=0;
    cin>>number;
    string arr[number];
    for(int i=0;i<number;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<number-1;i++)
    {
        if(arr[i]==arr[i+1])
         cnt++;
    }

    cout<<cnt<<endl;
    return 0;
}
