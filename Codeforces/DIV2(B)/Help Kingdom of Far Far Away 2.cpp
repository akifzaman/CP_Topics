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
    ll j=1, sum=0;
    bool neg=false;
    string s;
    cin>>s;

    if(s[0]=='-'){
        neg=true;
        s.erase(remove(s.begin(), s.end(), '-') , s.end());
    }

    ll len=s.length();
    ll fracIdx=len;
    string fracPart=".00";
    string intPart;

    for(ll i=0;i<len;i++){
        if(s[i]=='.'){
            fracIdx=i;
        }
    }
    ll k=3;
    for(ll i=fracIdx-1;i>=0;i--){
        if((i!=0) && i==(fracIdx-k)){
            intPart+=s[i];
            intPart+=',';
            k+=3;
        }
        else intPart+=s[i];

        sum+=(s[i]-'0');
    }
    if(sum==0) intPart='0';
    else reverse(intPart.begin(), intPart.end());
    for(ll i=fracIdx+1;i<len;i++){
        fracPart[j]=s[i];
        j++;
        if(j>2) break;
    }
    if(neg) cout<<"($"<<intPart+fracPart<<")"<<endl;
    else cout<<"$"<<intPart+fracPart<<endl;
    return;
}
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    solve();
}
