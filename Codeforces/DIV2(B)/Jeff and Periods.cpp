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
    ll n;
    cin>>n;
    vector < pair<ll,ll> > v;
    map <ll, pair<ll,ll>> ans;
    set<ll> s;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.pb(make_pair(x,i));
    }
    sort(v.begin(), v.end());
    ll cnt=0, dif=0;
    //cout<<v.size()<<endl;
    for(ll i=0;i<v.size();i++){
        if(v[i].first==v[i+1].first){
            dif=abs(v[i+1].second-v[i].second);
            s.insert(dif);
        }
        else{
            if(s.size()<=1){
                cnt++;
                ans[i]=(make_pair(v[i].first,dif));
            }
            dif=0;
            s.clear();
        }
    }
    cout<<cnt<<endl;
    for(ll i=0;i<ans.size();i++){
        if(ans[i].first!=0){
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }
    }
    return;
}
int main()
{
    solve();
}
