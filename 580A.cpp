#include<iostream>
using namespace std;

int main()
{
    int number,cnt=1;
    cin>>number;
    int arr[number];
    for(int i=0;i<number;i++)
    {
        if(arr[i]==arr[++i]&&arr[i+2]<arr[++i])
            continue;
        else if(arr[i]==arr[++i]&&arr[i+2]>arr[++i])
           {
              cnt++;
            continue;
           }
         else if(arr[i]<arr[++i])
            cnt++;
    }

    cout<<cnt<<endl;
    return 0;
}
