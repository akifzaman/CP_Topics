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
    ll n,m;
    cin>>n>>m;
    ll arr[n+10]={0};
    ll cnt=0;
    for(ll i=0;i<m;i++){
        ll x,y,z;
        cin>>x>>y>>z;
        if(arr[x]==0 && arr[y]==0 && arr[z]==0){
            arr[x]=1;
            arr[y]=2;
            arr[z]=3;
        }
        if(arr[x]==1){
            arr[y]=2;
            arr[z]=3;
        }
        else if(arr[x]==2){
            arr[y]=1;
            arr[z]=3;
        }
        else if(arr[x]==3){
            arr[y]=1;
            arr[z]=2;
        }
        else if(arr[y]==1){
            arr[x]=2;
            arr[z]=3;
        }
        else if(arr[y]==2){
            arr[x]=1;
            arr[z]=3;
        }
        else if(arr[y]==3){
            arr[x]=1;
            arr[z]=2;
        }
        else if(arr[z]==1){
            arr[x]=2;
            arr[y]=3;
        }
        else if(arr[z]==2){
            arr[x]=1;
            arr[y]=3;
        }
        else if(arr[z]==3){
            arr[x]=1;
            arr[y]=2;
        }
    }
    for(ll i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
int main()
{
    solve();
}
