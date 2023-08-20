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
static LL sui=10e4;
int main()
{
    selim_on_the_code();
    int n,counter=0;
    str s1,s2;
    cin>>n>>s1>>s2;
    vector<int>vec1(26,0),vec2(26,0);
    for (int i = 0; i < n; i++)
    {
        vec1[s1[i]-97]++;
        vec2[s2[i]-97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(vec1[i]!=vec2[i] && vec1[i]>vec2[i])counter+=vec1[i]-vec2[i];
    }

    cout <<counter<<'\n';
}
