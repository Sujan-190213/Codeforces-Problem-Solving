#include <iostream>
using namespace std;

int main() {
int room,a,b;
cin>>room;
int cnt=0;
for(int i=0;i<room;i++){
	cin>>a>>b;
	if(b-a>=2)
		++cnt;
}
cout<<cnt;
	return 0;
}
