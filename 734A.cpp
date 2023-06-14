#include<iostream>
#include<string>
using namespace std;
int main()
{
    int number,anton=0,danik=0;
    cin>>number;
    string str;
    cin>>str;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='A')
            anton++;
        if(str[i]=='D')
            danik++;
    }
    if(anton==danik)
        cout<<"Friendship"<<endl;
    else if(anton>danik)
        cout<<"Anton"<<endl;
    else if(anton<danik)
        cout<<"Danik"<<endl;

    return 0;
}
