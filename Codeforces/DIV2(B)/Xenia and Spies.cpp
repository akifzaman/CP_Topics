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
    string str;
    ll n, m, s, f, cur=0;
    cin>>n>>m>>s>>f;
    for(ll i=0;i<m;i++){
        cur++;
        ll t, l, r;
        cin>>t>>l>>r;

        if(s==f){

        }
        else if(f>s){
            while(abs(cur-t)!=0 && s!=f){
                str+='R';
                s++;
                cur++;
            }
            if(s!=f && ((s<l && s+1<=n && s+1<l) || (s>r && s+1<=n)) ){
                str+='R';
                s++;
            }
            else if(s!=f && ((s>=l && s<=r) || (s<l && s+1<=n && s+1>=l)) ) {
                str+='X';
            }
        }
        else if(s>f){
            while(abs(cur-t)!=0 && s!=f){
                str+='L';
                s--;
                cur++;
            }
            if(s!=f && ((s>r && s-1>=1 && s-1>r) || (s<l && s-1>=1)) ){
                str+='L';
                s--;
            }
            else if(s!=f && ((s>=l && s<=r) || (s>r && s-1>=1 && s-1<=r)) ){
                str+='X';
            }
        }
    }
    if(s<f){
        while(s!=f){
            str+='R';
            s++;
        }
    }
    else if(s>f){
        while(s!=f){
            str+='L';
            s--;
        }
    }
    cout<<str<<endl;
    return;
}
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    solve();
}
