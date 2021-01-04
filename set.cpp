#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> v;
        for(int i=0;i<2*n;i++)
        {
            cin>>v[i];
        }
        vector <int>:: iterator ip;

        ip = unique(v.begin(),v.end());

        v.resize(distance(v.begin(),ip));

        for (ip = v.begin(); ip != v.end(); ++ip)
        {
        cout << *ip << " ";
        }
    }
}
