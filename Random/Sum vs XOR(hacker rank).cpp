#include<bits/stdc++.h>
#include<algorithm>
typedef long long ll;
using namespace std;
typedef string str;
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));
const int SUI=1e5+1;
int main()
{
    fastread(); 
    ll n,counter=0;   cin>>n;
    while (n)
    {
        if(!(n&1))counter++;
        n=(n>>1);
    }   
    cout<<(1LL<<counter)<<'\n';
}
// Sum vs XOR(hackerrank)