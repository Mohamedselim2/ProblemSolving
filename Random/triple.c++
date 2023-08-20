// this_file_made_by_SELIM
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
    int t, sz,y;
    cin>>t;
    while(t--)
    {
        vector<int> vec(sui,0) ;
        int flag=0;
        cin>>sz;
        for (int i=0; i<sz;i++)
        {
            cin>>y;
            vec[y]++;
            if(vec[y]==3)flag=y;
            else continue;
        }
        cout<<(flag!=0?flag:-1 )<<'\n';
    }
}
