#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
long long x ;
cin >> x ; 
for (long long c=1 ; c<=x ; c++)
{
    if (c == x)
    {
        if (c%2==1) cout<< "I hate it";
        else if (c%2==0) cout<< "I love it";
    }
    else 
    {
        if (c%2==1) cout<< "I hate that ";
        else if (c%2==0) cout<< "I love that ";
    }
}
}

