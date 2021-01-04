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
        vector<int> disks;
        // for(int i=0;i<n;i++)
        // {
        //     int d;
        //     cin>>d;
        //     vector.push_back(d);
        // }



        vector<int> top_stacks;
        for(int i=0;i<n;i++)
        {
            int top;
            cin>>top;
            auto x= upper_bound(top_stacks.begin(),top_stacks.end(),top);
            if(x==top_stacks.end())
                top_stacks.push_back(top);
            else
                top_stacks[x-top_stacks.begin()]==top;
        }

        cout<<top_stacks.size()<<' ';
        for(auto i : top_stacks)
        {
            cout<< i <<' ';
        }


    }
}
