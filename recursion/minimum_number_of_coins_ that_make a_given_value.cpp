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

long long M = 1e9+7;
long long power(long long a, long long p)
{
    if(p==0) return 1;
    long long ans= power(a,p/2);
    ans =(ans * ans) % M;
    if(p%2) ans = (ans*a) % M;
    return ans;
}
ll nC2(ll n){
    return (n*(n-1))/2;
}
ll fact(ll n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
ll countOne(ll n){
    return __builtin_popcount(n);
}
ll checkParity(ll n){ //returns true if number of setbit is odd
    return __builtin_parity(n);
}
ll digitCount(ll n){
    return floor(log10(n))+1;
}
long long log2(long long x)
{
	long long res = 0;
	while (x >>= 1)
		res++;
	return res;
}
ll isPowerof2(ll x)
{
    return (x && !(x & x-1));
}

bool is_prime(ll n) {
    // Assumes that n is a positive natural number
    // We know 1 is not a prime number
    if (n == 1) {
        return false;
    }

    ll i = 2;
    // This will loop from 2 to int(sqrt(x))
    while (i*i <= n) {
        // Check if i divides x without leaving a remainder
        if (n % i == 0) {
            // This means that n has a factor in between 2 and sqrt(n)
            // So it is not a prime number
            return false;
        }
        i += 1;
    }
    // If we did not find any factor in the above loop,
    // then n is a prime number
    return true;
}

//sieve of arestothenes, creating vector of primes
const ll N = 1e6 + 1;
vector<ll> prime;
bool vis[N];
void sieveSolve()
{
	for(ll i = 3; i*i<=N; i+=2)
	{
		if(!vis[i])
		{
			for(ll j = i*i; j<=N; j += 2*i)
				vis[j] = true;
		}
	}
	prime.push_back(2LL);
	for(ll i = 3; i<N; i += 2)
		if(!vis[i]) prime.emplace_back(i);
}

const ll MAX = 1000000;
ll prefix[MAX + 1];

//(L->R)range er moddhe koyta prime ache shetar jonno buildPrefix()+query()
void buildPrefix()
{

	bool prime[MAX + 1];
	memset(prime, true, sizeof(prime));

	for (ll p = 2; p * p <= MAX; p++) {
		if (prime[p] == true) {
			for (ll i = p * 2; i <= MAX; i += p)
				prime[i] = false;
		}
	}
	prefix[0] = prefix[1] = 0;
	for (ll p = 2; p <= MAX; p++) {
		prefix[p] = prefix[p - 1];
		if (prime[p])
			prefix[p]++;
	}
}
ll query(ll L, ll R)
{
	return prefix[R] - prefix[L - 1];
}

//from 2^0 to 2^31~(10^9)
ll val[31]={1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768,
            65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216,
            33554432, 67108864, 134217728, 268435456, 536870912,1073741824};

ll GCD(ll a[],ll m){
    ll p=0,gcd=0;
    while(1){
        if(p>=m){
            return gcd;
        }
        gcd =__gcd(__gcd(a[p],a[p+1]),gcd);
        p+=2;
    }
}

///recursive approach
int solve(int coin[], int N, int val){
    if(val==0) return 0;
    int res = INT_MAX;
    forn(N){
        if(val>=coin[i]){
            int sub;
            sub=1+solve(coin, N, val-coin[i]);
            res=min(res,sub);
        }
    }
    return res;
}

///dynamic programming approach (top-down)
int dpSolve(int coin[], int N, int dp[], int val){
    if(dp[val]!=-1){return dp[val];}
    if(val==0){return 0;}
    else{
        int res=INT_MAX;
        forn(N){
            int sub;
            if(val>=coin[i]){
                sub=1+dpSolve(coin, N, dp, val-coin[i]);
                res=min(res,sub);
            }
        }
        dp[val]=res;
    }
    return dp[val];
}

///dynamic programming approach (bottom-up)
int dpSolveBottomUp(int coin[], int N, int dp[], int val){
    for(int i=1;i<=val;i++){
        for(int j=0;j<N;j++){
            if(i>=coin[j])
            dp[i]=min(dp[i], 1+dp[i-coin[j]]);
        }
    }
    return dp[val];
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cin.tie(NULL);
    int n;
    cin>>n;

    int c[n]={0};

    forn(n) {cin>>c[i];}

    int v;
    cin>>v;

    int dp[v+1];
    for(int i=0;i<=v;i++){
        dp[i]=-1;
        ///dp[i]=1000000009; //use this for the bottom up approach
    }
    dp[0]=0;
    dp[v]=dpSolve(c, n, dp, v);
    ///dp[v]=dpSolveBottomUp(c, n, dp, v); //use during bottom up approach

    if(dp[v]>=INT_MAX || dp[v]<0){
        cout<<"-1"<<endl;
    }
    else{
        cout<<dp[v]<<endl;
    }


    return 0;
}
