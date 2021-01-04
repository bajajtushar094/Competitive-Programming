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
        for(int i=0;i<s.size();i++)
        {
            s[i]=char(int(s[i])-(int('2')-int('0')));
        }
        cout<<s<<'\n';
    }
}
