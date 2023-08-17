#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char x ;
    cin >> x ;
    if (x>=65 && x<= 90)
    {
        cout<<(char)towlower(x)<< endl;
    }
    else 
    {
        cout<<(char)towupper(x)<< endl;
    }

    return 0 ;
}



