#include<iostream>
#include<cstring>
#include <cctype>
using namespace std;

int main()
{
    char arr[1000];
    cin >> arr;
    if(islower(arr[0]))
        arr[0] = arr[0] -32;
    cout << arr;
    return 0;
}
