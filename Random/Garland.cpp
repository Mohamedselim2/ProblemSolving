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
    str s1,s2;
    cin>>s1>>s2;
    vector<int>vec1(26,0),vec2(26,0);
    for(int i=0;i<s1.size();i++)
    {
        vec1[s1[i]-97]++;
    }

    for(int i=0;i<s2.size();i++)
    {
        vec2[s2[i]-97]++;
    }

    int sum=0;
    bool flag=1;
    for (int i = 0; i < 26; i++) {
        sum+=min(vec1[i],vec2[i]);
        if(vec2[i] && !vec1[i])flag=0;
    }
    cout<<(sum!=0 && flag?sum:-1)<<'\n';
}
