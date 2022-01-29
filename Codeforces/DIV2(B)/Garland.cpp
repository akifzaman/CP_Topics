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
    ll cnt=0;
    string p,q;
    map <char, ll> m,n;

    cin>>p>>q;
    for(ll i=0;i<p.length();i++){
        m[p[i]]++;
    }
    for(ll i=0;i<q.length();i++){
        n[q[i]]++;
    }
    for(char i='a';i<='z';i++){
        if(n[i]>0 && m[i]==0){
            cout<<"-1"<<endl;
            return;
        }
        else if(m[i]>0 && m[i]==n[i]){
            cnt+=m[i];
        }
        else if(m[i]>0 && n[i]>0 && m[i]!=n[i]){
            cnt+=(min(m[i],n[i]));
        }
    }
    cout<<cnt<<endl;
    return;
}
int main()
{
    solve();
}
