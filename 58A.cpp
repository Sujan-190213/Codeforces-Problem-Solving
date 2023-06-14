#include <iostream>
#include <string>

using namespace std;

int main()
{
    string target="hello";
    string input;
    cin>>input;
    int length=input.length();
    int a=0;
    int i, cnt = 0;
    for(i=0; i<length; i++){
        if(input[i]==target[a]){
            cnt++;
            a++;
        }
    }
    if(cnt==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
