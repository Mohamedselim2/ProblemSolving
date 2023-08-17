#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    int x,s=0;
    cin>>x;
    int m[x][2];
    for(int rows=0;rows<x;rows++)
    {
        for(int cols=0;cols<2;cols++)
        {
            cin>>m[rows][cols];
        }
    }

    for(int rows=0;rows<x;rows++)
    {
        int p=0,g=1,j=0;
        for(int cols=0;cols<=x;cols++)
        {
            if(m[rows][p]==m[j][g])s++;
            j++;
        }
    }
    cout<<s;
}