#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n,z;
        cin>>n>>z;
        priority_queue<int> soldier;
        for(int i=0;i<n;i++)
        {
            int c;
            cin>>c;
            soldier.push(c);
        }
        int count=0;
        while(z>0&&!soldier.empty())
        {
            int s= soldier.top();
            soldier.pop();
            z-=s;
            if(s/2>0)
                soldier.push(s/2);
            count++;
        }

        if(z>0)
            cout<<"Evacuate"<<'\n';
        else
            cout<<count<<'\n';



    }
}
