#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    stable_sort(v.begin(),v.end());

    int days;
    int j;
    for(int i=0;i<n;)
    {
        if(v[i]==i+1)
        {
            days++;
            i++;
        }
        else
        {
            for(j=i;j<n;j++)
            {
                if(v[j]==i+1)
                {
                    days++;
                }
            }
            i=j;
        }
    }

    cout<<days;
}
