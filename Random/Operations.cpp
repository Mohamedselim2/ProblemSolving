/*
███╗░░░███╗███████╗███████╗███╗░░░███╗  ███╗░░░███╗███████╗███████╗███╗░░░███╗
████╗░████║██╔════╝██╔════╝████╗░████║  ████╗░████║██╔════╝██╔════╝████╗░████║
██╔████╔██║█████╗░░█████╗░░██╔████╔██║  ██╔████╔██║█████╗░░█████╗░░██╔████╔██║
██║╚██╔╝██║██╔══╝░░██╔══╝░░██║╚██╔╝██║  ██║╚██╔╝██║██╔══╝░░██╔══╝░░██║╚██╔╝██║
██║░╚═╝░██║███████╗███████╗██║░╚═╝░██║  ██║░╚═╝░██║███████╗███████╗██║░╚═╝░██║
╚═╝░░░░░╚═╝╚══════╝╚══════╝╚═╝░░░░░╚═╝  ╚═╝░░░░░╚═╝╚══════╝╚══════╝╚═╝░░░░░╚═╝
 */
//  WITH THE NAME OF ALLAH
#include<bits/stdc++.h>
typedef long long LL;
using namespace std;
typedef string str;
#define vc vector<int>
#define tc int t; cin >> t; while(t--)
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define X first
#define Y second
#define endl "\n"
#define selim_on_the_code() (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));
const LL sui=10e4;
int main()
{
    selim_on_the_code();
    vc vec(4,0);
    tc
    {
        set<double>st;
        double a,b; cin >> a >> b;
        st.emplace(a+b);
        st.emplace(a*b);
        st.emplace(a-b);
        st.emplace((double)a/b);
        st.emplace(b-a);
        st.emplace((double)b/a);
        cout << st.size() << endl;
    }
}
