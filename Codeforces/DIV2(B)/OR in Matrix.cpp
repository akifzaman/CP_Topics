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

ll arr[110][110];
ll brr[110][110];
ll crr[110][110];

void solve(){
    ll m ,n;
    cin>>m>>n;
    for(ll i=0;i<m;i++){
        for(ll j=0;j<n;j++){
            arr[i][j]=1;
        }
    }
    for(ll i=0;i<m;i++){
        for(ll j=0;j<n;j++){
            cin>>brr[i][j];
            if(brr[i][j]==0){
                for(ll k=0;k<n;k++){
                    arr[i][k]=0;
                }
                for(ll k=0;k<m;k++){
                    arr[k][j]=0;
                }
            }
        }
    }
    for(ll i=0;i<m;i++){
        for(ll j=0;j<n;j++){
            for(ll k=0;k<m;k++){
                crr[i][j] |= arr[k][j];
            }
            for(ll l=0;l<n;l++){
                crr[i][j] |= arr[i][l];
            }
            if(brr[i][j]!=crr[i][j]){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
    for(ll i=0;i<m;i++){
        for(ll j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}
int main()
{
    solve();
}
