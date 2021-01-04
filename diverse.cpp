#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        char last = s[s.size()-1];
        char first = s[0];
        if((last-first+1)==s.size())
            cout<<"Yes"<<'\n';
        else
            cout<<"No"<<'\n';
    }
}
