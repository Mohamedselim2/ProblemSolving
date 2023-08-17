#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
long long x ;
cin >> x ;
int year = x / 365;
 x -=  (year*365) ;
int month =x/30 ;
 x -=  (month*30);
int day = x ;
cout<<abs(year)<<" years"<< endl ;
cout<<abs(month)<<" months"<< endl ;
cout<<abs(day)<<" days"<< endl ;

}

