#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
long long x , sum=0 ;
cin >> x ; 
for (long long c=1 ; c<=x ; c++)
{
    int p1 , p2  , p3 ,ic=0 ;
    cin >> p1 >> p2 >>p3 ;
    if (p1==1) ic++ ;
    if (p2==1) ic++ ;
    if (p3==1) ic++ ;
    if (ic>=2) sum++ ;

}
cout << sum ;
}