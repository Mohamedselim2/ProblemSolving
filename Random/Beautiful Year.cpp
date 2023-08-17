#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
  int num;
  int day,month,year,year1,n=0;
  cin>>num; 
  num++;
    day=num%10;
    month=((num%100)-day)/10;
    year=(num%1000-(month+day))/100; 
    year1=(num%10000-(year+month+day))/1000;
  while(day==month || day==year || day==year1 || month==year || month==year1 || year==year1)
  {
    num++;
    day=num%10;
    month=((num%100)-day)/10;
    year=(num%1000-(month+day))/100; 
    year1=(num%10000-(year+month+day))/1000;
  }
  cout<<num;
}