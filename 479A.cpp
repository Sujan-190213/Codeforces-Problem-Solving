#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,ans;
    cin>>a>>b>>c;
    ans = a + b + c;
    ans = max(ans,(a + b) * c);
	ans = max(ans,a * (b + c));
	ans = max(ans,a * b * c);

	cout << ans << endl;

    return 0;
}
