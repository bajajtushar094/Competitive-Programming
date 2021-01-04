#include <bits/stdc++.h>
using namespace std;
# define ll long long


void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    //int res = 0;
    //int ans = maxSubarr(a, n-1, n-2, res);
    ll dp[n];
    dp[0] = 1;
    ll sum = dp[0];
    for(ll i=1;i<n;i++){
        if(a[i-1]<=a[i]){
            dp[i] = dp[i-1]+1;
        } 
        else if(a[i] < a[i-1]){
            dp[i] = 1;
        }
        sum += dp[i];
    }
    cout<<sum<<"\n";
    
}

int main() {
	ios::sync_with_stdio(false); 
	cin.tie(nullptr); 
	cout.tie(nullptr);
	
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
