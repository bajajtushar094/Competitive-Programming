#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,t;
        cin>>n>>t;
        vector<int> piles;
        for(int i=0;i<n;i++)
        {
            int c;
            cin>>c;
            piles.push_back(c);
        }


        stable_sort(piles.begin(),piles.end());
        int k= piles[0];
        int sum=0;
        for(int i=n-1;i>0;i--)
        {
            int z=(t-piles[i]);
            if(z>0)
                sum+=(z/k);
        }

        cout<<sum<<'\n';
    }
}
