#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
long long  a , b , c ;
char z , x ;
cin >> a >> z >> b >> x >> c;
if (z==43 && (a + b == c) )
{
    cout << "Yes";
}
else if (z == 42 && (a * b == c) )
{
    cout << "Yes" ;
}
else if (z ==45 && (a - b == c) )
{
    cout << "Yes" ;
}
else if (z==43 && (a + b != c) )
{
    cout << a+b ;
}
else if (z == 42 && (a * b != c) )
{
    cout << a*b ;
}
else if (z ==45 && (a - b != c) )
{
    cout << a-b ;
}
}