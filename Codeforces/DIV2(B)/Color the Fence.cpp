#include<bits/stdc++.h>
#define         nl                  "\n"
#define         mod                 1000000007
#define         sz(c)               (int)c.size()
#define         pb                  push_back
#define         ff                  first
#define         ss                  second
#define         mkp                 make_pair
#define         ll                  long long
#define         pii                 pair<int, int>
#define         pll                 pair<ll, ll>
#define         vll                 vector<ll>
#define         vi                  vector<int>
#define         no                  cout<<"NO\n"
#define         yes                 cout<<"YES\n"
#define         one                 cout<<"1\n"
#define         mone                cout<<"-1\n"
#define         gcd(a, b)           __gcd(a, b)
#define         total_bit(a)        __builtin_popcount(a)
#define         lcm(a, b)           ((a)*((b)/gcd(a,b)))
#define         all(p)              p.begin(),p.end()
#define         mem(ar,val)         memset(ar, val, sizeof(ar))
#define         UNIQUE(a)           sort(all(a)); a.erase(unique(all(a)), a.end())
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const double pi = acos(-1.0);
const ll INF = 1000000000000000000;
const int N = 1e6+7;
string digit = "0123456789";
void solve()
{
    ll n, m, a, i, j, k, cnt = 0, sm = 0, sm1 = 0, sm2 = 0;
    string s;
    cin>>n;
    ll ar[10];
    string ans;
    map<ll, ll> mp;
    for(i = 1; i<10; i++)
    {
        cin>>ar[i];
    }
    while(true)
    {
        ll mxposi = 0, paintNeed = 0;
        for(i = 9; i>0; i--)
        {
            ll tm = n/ar[i];
            if(tm == mxposi)
            {
                if(paintNeed > ar[i])
                    mxposi = tm, paintNeed = ar[i];
            }
            else if(tm > mxposi) mxposi = tm, paintNeed = ar[i];

        }
        if(mxposi == 0) break;

        for(i = 9; i>0; i--)
        {
            if(ar[i] > n) continue;
            ll newN = n - ar[i];
            if(newN / paintNeed >= mxposi-1)
            {
                ans += digit[i];
                n = newN;
                break;
            }
        }
    }
    if(ans.empty())
        mone;
    else
        cout<<ans<<nl;
}
int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(NULL);
//    int t;
//    cin>>t;
//    while(t--)
        solve();
    return 0;
}

