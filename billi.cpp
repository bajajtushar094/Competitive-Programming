#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000009

void f()
{

}

int main()
{   
    ios::sync_with_stdio(0);
	cin.tie(0);
    int t=1;
    cin>>t;
    
    ll dp[1000006]={};
    dp[0]=1;
    dp[1]=0;
    dp[2]=dp[3]=1;
    for(int i=4;i<1000006;i++)
    {
        dp[i]=(dp[i-2]+dp[i-3])%MOD;
    }
    while(t--)
    {
        int n;
        cin>>n;
        cout<<dp[n]<<'\n';
    }

}