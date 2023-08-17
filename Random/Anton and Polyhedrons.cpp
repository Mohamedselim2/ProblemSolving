#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    int x,m=0;
    cin>>x;
    str s,n1="Tetrahedron",n2="Cube",n3="Octahedron",n4="Dodecahedron",n5="Icosahedron";
    for(int i=1;i<=x;i++)
    {
        cin>>s;
        if(s==n1)m+=4;
        else if(s==n2)m+=6;
        else if(s==n3)m+=8;
        else if(s==n4)m+=12;
        else if(s==n5)m+=20;
    }
    cout<<m;
}