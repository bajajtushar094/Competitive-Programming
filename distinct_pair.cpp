#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> a,b;
    for(int i=0;i<n;i++)
    {
        int c;
        cin>>c;
        a.push_back({c,i});
    }
    for(int i=0;i<m;i++)
    {
        int c;
        cin>>c;
        b.push_back({c,i});
    }

    stable_sort(a.begin(),a.end());
    stable_sort(b.begin(),b.end());

    for(int i=0;i<n;i++)
    {
        cout<<a[i].second<<' '<<b[0].second<<'\n';
    }
    for(int i=1;i<m;i++)
    {
        cout<<a[n-1].second<<' '<<b[i].second<<'\n';
    }

}
