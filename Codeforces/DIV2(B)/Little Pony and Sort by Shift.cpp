#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isDescending(ll a[], ll m, ll p){
    for(ll i=m;i<p-1;i++){
        if(a[i]<a[i+1]){
            return false;
        }
    }
    return true;
}
bool isAscending(ll a[], ll m, ll p){
    for(ll i=m;i<p-1;i++){
        if(a[i]>a[i+1]){
            return false;
        }
    }
    return true;
}
void solve(){
    ll n, divPoint=0;
    cin>>n;
    ll v[n]={0};
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    if(isAscending(v,0,n)){
        cout<<"0"<<endl;
    }
    else if(isDescending(v,0,n) && n==2){
        cout<<"1"<<endl;
    }
    else if(isDescending(v,0,n) && n>2){
        cout<<"-1"<<endl;
    }
    else{
        for(ll i=0;i<n-1;i++){
            if((i+1)<n && v[i]>v[i+1]){
                divPoint=(i+1);
                break;
            }
        }
        if(isAscending(v,divPoint,n) && isAscending(v,0,divPoint-1) && v[n-1]<=v[0]){
            cout<<(n-divPoint)<<endl;
            return;
        }
        else cout<<"-1"<<endl;
        return;
    }
}
int main()
{
    solve();
}
