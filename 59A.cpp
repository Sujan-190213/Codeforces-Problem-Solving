#include<iostream>
#include<string>

using namespace std;

int main()
{
    string word;
    cin>>word;
    int upper=0;
    int lower=0;
    for(int i=0;word[i]!='\0';i++)
    {
        if(word[i]>=65&&word[i]<=90)
            upper++;
        else if(word[i]>=97&&word[i]<=122)
            lower++;
    }
    if(upper>lower)
    {
       for (int i=0; i<word.length(); i++)
        word[i]=toupper(word[i]);
    }
    else if(upper<lower||upper==lower)
    {
       for (int i=0; i<word.length(); i++)
        word[i]=tolower(word[i]);
    }

    cout<<word<<endl;

   return 0;
}
