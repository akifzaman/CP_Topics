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
    string s;
    map <string, ll> mp;
    vector <string> vs;
    cin>>s;
    ll len=s.length();
    for(ll i=len-1;i>=0;i--){
        string temp;
        ll ymul=1, mmul=1, dmul=1;
        ll year=0, month=0, day=0;
        if( s[i]=='-' || s[i-1]=='-' || s[i-2]=='-' || s[i-3]=='-' ||
            s[i-5]=='-' || s[i-6]=='-' || s[i-8]=='-' || s[i-9]=='-' || s[i-4]!='-' || s[i-7]!='-' ){
                continue;
        }
        for(ll k=i;k>=(i-3);k--){
            temp+=s[k];
            year+=((s[k]-'0')*ymul);
            ymul*=10;
        }
        for(ll k=(i-5);k>=(i-6);k--){
            temp+=s[k];
            month+=((s[k]-'0')*mmul);
            mmul*=10;
        }
        for(ll k=(i-8);k>=(i-9);k--){
            temp+=s[k];
            day+=((s[k]-'0')*dmul);
            dmul*=10;
        }
        reverse(temp.begin(), temp.end());
        if(year>=2013 && year<=2015){
            if(month==2){
                if(day>=1 && day<=28){
                    vs.pb(temp);
                    mp[temp]++;
                }
            }
            else if(month==4 || month==6 || month==9 || month==11){
                if(day>=1 && day<=30){
                    vs.pb(temp);
                    mp[temp]++;
                }
            }
            else if(month>=1 && month<=12){
                if(day>=1 && day<=31){
                    vs.pb(temp);
                    mp[temp]++;
                }
            }
        }
    }
    ll maxi=INT_MIN;
    string ans;
    for(ll i=0;i<vs.size();i++){
        if(mp[vs[i]]>maxi){
            ans=vs[i];
            maxi=mp[vs[i]];
        }
    }
    for(ll i=0;i<ans.length();i++){
        if(i==1 || i==3){
            cout<<ans[i]<<"-";
        }
        else cout<<ans[i];
    }
    cout<<endl;
    return;
}
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    solve();
}

/// best solution///

/*#include <iostream>
#include <map>
#include <string>
#include <stdio.h>
using namespace std;
const int day[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
map<string,int>f;
string s;
int main()
{
    int i,j,n=0,y,m,d;
    string t,x;
    cin>>s;
    for (i=0;i+10<=(int)s.length();++i)
    {
        x=s.substr(i,10);
        if (sscanf((x+"*1").c_str(),"%2d-%2d-%4d*%d",&d,&m,&y,&j)!=4)continue;
        if ((y<2013)||(y>2015))continue;
        if ((m<1)||(m>12))continue;
        if ((d<1)||(d>day[m]))continue;
        if (n<++f[x])n=f[x],t=x;
    }
    cout<<t;
    return 0;
}
*/
