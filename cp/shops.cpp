#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,k;
        cin>>n>>k;
        vector <int> a;
        for(int i=0;i<n;i++)
        {
            int c;
            cin>>c;
            a.push_back(c);
        }
        sort(a.begin(),a.end());

        int cost = a[0]+k;
        int c=0;

        if (!((cost<=(a[n-1]+k))&&(cost>=(a[n-1]-k))))
            cout<<-1;
        else
        {
            for(int i=1;i<n;i++)
            {
                if((a[i]+k)>=cost&&cost>=(a[i]-k))
                {
                    c++;
                }
            }
            if(c==n-1)
            cout<<cost;
            else
            cout<<-1;
        }
        cout<<'\n';
    }
}
