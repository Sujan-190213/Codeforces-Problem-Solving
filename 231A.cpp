#include<iostream>
using namespace std;

int main(){
int Arr[1000][3];
int temp = 0;
int cnt = 0;
int problemNumber;
cin >> problemNumber;

for(int i = 0;i < problemNumber;i++)
{
    for(int j = 0;j < 3;j++)
    {
       cin >> Arr[i][j];
    }

}

for(int k = 0;k < problemNumber;k++)
{
    for(int l = 0;l < 3;l++)
    {
       temp = temp + Arr[k][l];

    }
    if(temp >= 2)
       {
           cnt++;
       }

 temp = 0;
}

cout << cnt << endl;

return 0;
}
