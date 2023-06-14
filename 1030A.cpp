#include<iostream>
using namespace std;

int main()
{
    int people,hard=0;
    cin>>people;
    int arr[people];
    for(int i=0;i<people;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<people;i++)
    {
        if(arr[i]==1)
        {
            hard=1;
            break;
        }

    }
    if(hard==1)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;

    return 0;
}
