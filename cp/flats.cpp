#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> a;
    for(int i=0;i<n;i++)
    {
        int c;
        cin>>c;
        a.push_back(c);
    }

    vector<int> pos;
    for(int i=1;i<a.size()-1;i++)
    {
        if((a[i]==0)&&(a[i+1]==1)&&(a[i-1]==1))
            pos.push_back(i);
    }

    int k=0;
    for(int i=0;i<pos.size()-1;i++)
    {
        if((pos[i+1]-pos[i])>2)
            k+=2;
        else if((pos[i+1]-pos[i])==2)
            k++;
        else;
    }

    cout<<k;
}
