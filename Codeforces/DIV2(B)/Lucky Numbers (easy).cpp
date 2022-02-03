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

ll num(string a){
    ll pos=1, ans=0;
    for(ll i=a.length()-1;i>=0;i--){
        ans+=(pos*(a[i]-'0'));
        pos*=10;
    }
    return ans;
}

void solve(){
    string str, comp;
    ll se=0, f=0;
    cin>>str;
    ll len=str.length();
    for(ll i=0;i<len;i++){
        if(str[i]=='4')f++;
        else if(str[i]=='7') se++;
    }
    if(f==se && f+se==len){
        cout<<str<<endl;
        return;
    }
    if(len%2==1){
        len++;
        for(ll i=0;i<len/2;i++){
            comp+="4";
        }
        for(ll i=len/2;i<len;i++){
            comp+="7";
        }
        cout<<comp<<endl;
        return;
    }
    else if(len%2==0){
        for(ll i=0;i<len/2;i++){
            comp+="7";
        }
        for(ll i=len/2;i<len;i++){
            comp+="4";
        }
        if(comp<str){
            len+=2;
        }
        comp="";
        for(ll i=0;i<len/2;i++){
            comp+="4";
        }
        for(ll i=len/2;i<len;i++){
            comp+="7";
        }
        do{
            if(num(comp)>=num(str)){
                cout<<comp<<endl;
                return;
            }
        }while(next_permutation(comp.begin(), comp.end()));
    }
    return;
}
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    solve();
}
