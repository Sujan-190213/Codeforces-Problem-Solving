#include <iostream>
using namespace std;

int main() {
int number;
cin>>number;
bool flag=0;
int arr[13]={4,7,47,74,44,77,444,447,474,477,777,774,744};
 for(int i=0;i<13;i++){
	 if(number%arr[i]==0){
		 flag=true;
	 }
 }
 if(flag)
cout<<"YES";
else
	cout<<"NO";
return 0;
}
