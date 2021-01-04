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
        map<char,int> count;
        int f=0;
        while(1)
        {
            char c;
            cin>>c;

            count[c]++;
        }
        int z=0;
            for(map<char,int>::iterator b= count.begin();b!=count.end();b++)
            {
                if((b->second)%n==0)
                {
                    z++;
                }
            }
            if(z==count.size())
                cout<<"YES"<<'\n';
            else
                cout<<"NO"<<'\n';
            }

}
