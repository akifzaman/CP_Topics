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
#define         hello               cout<<"hello"<<endl;
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
const double pi = acos(-1.0);
const ll INF = 1000000000000000000;
long long M = 1e9+7;
const ll N = 1e6 + 1;

bool isSorted(ll a[], ll m){
    for(ll i=0;i<m-1;i++){
        if(a[i]>a[i+1]){
            return false;
        }
    }
    return true;
}
bool isSortedRev(ll a[], ll m){
    for(ll i=0;i<m-1;i++){
        if(a[i]<a[i+1]){
            return false;
        }
    }
    return true;
}

void solve(){
    ll n;
    cin>>n;
    ll arr[n+10]={0};
    for(ll i=0;i<n;i++) cin>>arr[i];

    if(isSorted(arr, n)){
        cout<<"yes"<<endl;
        cout<<"1 1"<<endl;
        return;
    }
    if(isSortedRev(arr, n)){
        cout<<"yes"<<endl;
        cout<<"1 "<<n<<endl;
        return;
    }
    ll decCount=0,start=0,stop=0;
    bool startFlag=false, stopFlag=false;
    for(ll i=1;i<n;i++){
        if(arr[i]<arr[i-1] && startFlag==false){
            start=(i-1);
            startFlag=true;
        }
        if(arr[i]<arr[i+1] && stopFlag==false && startFlag==true){
            stop=i;
            stopFlag=true;
            continue;
        }
        if(startFlag && stopFlag && arr[i]<arr[i-1]){
            cout<<"no"<<endl;
            return;
        }
    }
    if(start>0 && stop==0){
        stop=n-1;
    }
    if(stop+1<n && arr[start]>arr[stop+1]){
        cout<<"no"<<endl;
    }
    else if(start-1>=0 && arr[stop]<arr[start-1]){
        cout<<"no"<<endl;
    }
    else{
        cout<<"yes"<<endl;
        cout<< start+1 <<" "<< stop+1 <<endl;
    }

    return;
}
int main()
{
    solve();
}
