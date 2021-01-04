#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define range 100001

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    cin>>t;
    int dp[range]={0};
    for(int i=2;i<range;i++)
    {
        if(dp[i])
        continue;
        for(int j=i;j<range;j+=i)
        {
            dp[j]+=1;
        }
    }

    while(t--)
    {
        int A,B,K;
        cin>>A>>B>>K;
        int count=0;
        for(int i=A;i<=B;i++)
        {
            if(dp[i]==K)
            count++;
        }

        cout<<count<<'\n';

    }
}