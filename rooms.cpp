#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        string s;
        cin>>n>>s;
        ll returnrooms = n;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]=='>'&&s[i+1]=='<')
            {
                returnrooms--;
            }
            if(s[i]=='<'&&s[i+1]=='>')
            {
                returnrooms--;
            }
        }
        if(s[n-1]=='>'&&s[0]=='<')
        {
            returnrooms--;
        }

        cout<<returnrooms<<'\n';
    }
}