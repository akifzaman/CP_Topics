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

const int maxn = 200005;
int dp[maxn];
void solve(){
 	int n; cin >> n;
 	for(int i = 0; i<n; i++){
 		cin >> dp[i];
 		if(i){
 			if(i==1) dp[i] = min(dp[i], dp[i-1]);
 			else dp[i] = min(dp[i], max(dp[i-1], dp[i-2]));
 		 }
 	}
 	cout << dp[n-1] << endl;
}
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    solve();
}