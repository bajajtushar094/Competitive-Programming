#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        vector<int> a;
        for(int i=0;i<n;i++)
        {
            int c;
            cin>>c;
            a.push_back(c);
        }

        sort(a.begin(),a.end());
        
        int t1 = a[n-1];
        int t2 = a[n-2];

        for(int i=n-3;i>=0;i--)
        {
            if(t1>=t2)
            {
                t2+=a[i];
            }
            else if(t2>t1)
            {
                t1+=a[i];
            }
            
        }

        cout<<'\n';
        cout<<max(t1,t2);
        
    }
}