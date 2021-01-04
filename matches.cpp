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
        string s;
        cin>>s;


        if(n%2==0)
        {
            int c=0;
            for(int i=2;i<=s.size();i+=2)
            {

                if((s[i-1]-'0')%2!=0)
                {
                    c++;
                }
            }

            if(c>(n/2-1))
                cout<<'1'<<'\n';
            else
                cout<<'2'<<'\n';
        }
        else
        {
            int c=0;
            for(int i=1;i<=s.size();i+=2)
            {

                if((s[i-1]-'0')%2!=0)
                {
                    c++;
                }
            }

            if(c>0)
                cout<<'1'<<'\n';
            else
                cout<<'2'<<'\n';
        }
        }
    }

