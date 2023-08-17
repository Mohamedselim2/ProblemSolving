#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
long long n1,n2 ;
char s ;
cin >> n1 >> s >> n2 ;
if (s == 43)
{
    cout << n1+n2;
}
else if (s== 45)
{
    cout << n1-n2;
}
else if (s== 42)
{
    cout << n1*n2;
}
else 
{
    cout << n1/n2;
}
    return 0 ;
}