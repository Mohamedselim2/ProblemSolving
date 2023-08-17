#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
long long  n1 , n2 , n3 , n4 ;
cin >> n1 >> n2 >> n3 >> n4 ; 
long long mul = (n1%100*n2%100*n3%100*n4%100)%100 ;
if (mul<10)
{
    cout<<"0"<<mul;
}
else {
cout<< mul;
}
}