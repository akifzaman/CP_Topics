#include <bits/stdc++.h>
using namespace std;

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
#define         lcm(a, b)           ((a)*((b)/gcd(a,b)))
#define         all(p)              p.begin(),p.end()
#define         mem(ar,val)         memset(ar, val, sizeof(ar))
#define         forn(n)             for(int i=0;i<n;i++)
#define         UNIQUE(a)           sort(all(a)); a.erase(unique(all(a)), a.end())
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
const double pi = acos(-1.0);
const ll INF = 1000000000000000000;
long long M = 1e9+7;
const ll N = 1e6 + 1;




void solve(){
    ll n, maxi=INT_MIN,cnt=0;
    cin>>n;
    vector <vector<ll>> v(n+10);
    for(ll i=1;i<=n;i++){
        ll x;
        cin>>x;
        v[x].pb(i);
        maxi=max(maxi,x);
    }
    for(ll i=1;i<=maxi;i++){
        if(v[i].size()>0){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    for(ll i=1;i<=maxi;i++){
        if(v[i].size()>1){
            cout<<i<<" "<<v[i][1]-v[i][0]<<endl;
        }
        else if(v[i].size()==1){
            cout<<i<<" 0"<<endl;
        }
    }
    return;
}
int main()
{
    solve();
}
