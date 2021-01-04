#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,num;
        cin>>n>>num;
        for(int i=1;i<n;i++)
        {
            int p;
            cin>>p;
            num^=p;
        }
        cout<<num<<'\n';
    }
}