#include<iostream>
using namespace std;

int main()
{
   int year,nextYear;
   cin>>year;
   while(true)
   {
       ++year;
       int first=year/1000;
       int second=(year/100)%10;
       int third=(year/10)%10;
       int fourth=(year/1)%10;
      if(first!=second&&first!=third&&first!=fourth&&second!=third&&second!=fourth&&third!=fourth)
       break;
   }
   cout<<year;
}

