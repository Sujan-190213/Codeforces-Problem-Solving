
#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int i,cnt=0;
    string arr;
    cin >> arr;
    sort(arr.begin(),arr.end());
    for(i=0;i<arr.size();i++){
        if(arr[i]!=arr[i+1])
            cnt++;
    }
    if(cnt%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}
