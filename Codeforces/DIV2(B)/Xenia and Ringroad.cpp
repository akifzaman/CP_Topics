#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n,m,sum=0;
    cin>>n>>m;
    unsigned long long arr[m];

    for(unsigned long long i=0;i<m;i++){
        cin>>arr[i];
    }
    sum+=arr[0]-1;
    for(unsigned long long i=0;i<m-1;i++){
        if(arr[i]>arr[i+1]){
            sum+=n-arr[i]+arr[i+1];
        }
        else{
            sum+=arr[i+1]-arr[i];
        }
    }
    cout<<sum<<endl;
    return 0;
}
