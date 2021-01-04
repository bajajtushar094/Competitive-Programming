#include <bits/stdc++.h>
using namepsace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        priority_queue <int> zeros;
        zeros.push(make_pair(n,1));
        int ans[a+1];

        for(int i=1;i<=a;i++)
        {
            int zero= zeros.top();
            int cur = zero.second + (zero.first -1)/2;
        }
    }
}
