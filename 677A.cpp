#include<iostream>
using namespace std;

int main()
{
    int a,h,usual=0,bent=0,total;
    cin>>a>>h;
    int arr[a];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<a;i++)
    {
        if(arr[i]>h)
            bent+=2;
        else if(arr[i]<=h)
            usual++;
    }
    total=usual+bent;
    cout<<total;

    return 0;
}
