#include<bits/stdc++.h>
typedef long long LL;
using namespace std;
typedef string str;
#define vc vector<int>
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define X first
#define Y second
#define selim_on_the_code() (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));
static LL sui=2e5+1;
int main()
{
    selim_on_the_code();
    int n,y,counter=0;
    cin>>n;
    vector<int>vec(101,0);
    for (int i = 0; i < n; i++)
    {
        cin>>y;
        vec[y]++;
        if(vec[y]%2==0)counter++;
    }
    cout <<counter/2<<'\n';
}
