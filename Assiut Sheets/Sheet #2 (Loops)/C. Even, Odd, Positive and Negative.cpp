#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
long long x , y , e=0 , o=0 , p=0 , n=0 ;
cin >> x ;
for (int c=1;c<=x;c++)
{
    cin >> y ;
    if(y%2==0) e++ ;
    if(y%2==1 || y%2==-1 ) o++ ;
    if(y>0) p++ ;
    if(y<0) n++ ;

}

cout << "Even: " << e << endl 
<< "Odd: " << o << endl 
<< "Positive: " << p << endl 
<< "Negative: " << n << endl ;


}

