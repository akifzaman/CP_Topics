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



#define MM 1000003
void solve(){
    ll sum=0;
    string p,s;
    cin>>p;
    for(ll i=0;i<p.length();i++){
        if(p[i]=='>') s+="1000";
        else if(p[i]=='<') s+="1001";
        else if(p[i]=='+') s+="1010";
        else if(p[i]=='-') s+="1011";
        else if(p[i]=='.') s+="1100";
        else if(p[i]==',') s+="1101";
        else if(p[i]=='[') s+="1110";
        else if(p[i]==']') s+="1111";
    }
    //cout<<s<<endl;
    ll mul=1,ans=1;
    for(ll i=s.length()-1;i>=0;i--){
        if(s[i]=='1'){
            sum=((sum%MM) +(mul%MM))%MM;
        }
        //cout<<mul<<" "<< sum <<endl;
        mul=(((mul)%MM)*2)%MM;
    }
    cout<<sum<<endl;
}
int main()
{
    solve();
}
