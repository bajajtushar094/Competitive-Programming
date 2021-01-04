#include <bits/stdc++.h>
using namespace std;


bool solve(){
        int n,m;
        cin>>n>>m;
        bool flag=false;
        for(int i=0;i<n&&flag==false;i++)
        {
            int a,b,c,d;
            cin>>a>>b>>c>>d;
            if(b==c)
            {
                flag=true;
            }
        }

        if(m%2!=0)
        {
            return false;
        }
        else
        {
        if(flag==true)
            {
                return true;
            }
            else
            {
                return false;
            }   
        }
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        if(solve())
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
        
    }
}