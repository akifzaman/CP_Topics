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
#define         gcd(a, b)           __gcd(a, b)
#define         total_bit(a)        __builtin_popcount(a)
#define         lcm(a, b)           ((a)*((b)/gcd(a,b)))
#define         all(p)              p.begin(),p.end()
#define         mem(ar,val)         memset(ar, val, sizeof(ar))
#define         forn(n)             for(int i=0;i<n;i++)
#define         UNIQUE(a)           sort(all(a)); a.erase(unique(all(a)), a.end())
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const double pi = acos(-1.0);
const ll INF = 1000000000000000000;

void solve(){
    ll n,m,cnt=0;
    cin>>n>>m;

    ll arr[n]={0};
    ll brr[n]={0};
    map <ll,ll> mp;

    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    for(ll i=0;i<m;i++){
        ll x;
        cin>>x;
        brr[i]=x;
        mp[x]++;
    }
    ll r1=mp.size();
    for(ll i=0;i<n;i++){
        cout<<mp.size()<<endl;
        if(mp[arr[i]]==0){
            for(ll j=0;j<m;j++){
                if(brr[j]>arr[i] && mp[brr[j]]>0){
                    mp[brr[j]]--;
                    cnt++;
                    continue;
                }
                else{
                    cout<<arr[i]<<"******"<<endl;
                    mp[arr[i]]++;
                    cnt++;
                }
                //cnt++;
            }
        }
    }
    for(ll i=0;i<m;i++){
        cout<<mp[brr[i]]<<" ";
    }
    cout<<endl;
    ll r2=mp.size();
    cout<<r2<<" "<<r1<<" "<<r2-r1<<endl;
}
int main()
{
    solve();
}
