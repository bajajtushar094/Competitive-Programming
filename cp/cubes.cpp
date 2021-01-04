#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<int> a;
        for(int i=0;i<n;i++)
        {
            int c;
            cin>>c;
            a.push_back(c);
        }

        int c=0;
        bool swapped;
        for(int i=0;i<n-1;i++)
        {
            swapped = false;
            for(int j=0;j<n-i-1;j++)
            {
                if(a[j+1]<a[j])
                {
                    c++;
                    int t= a[j+1];
                    a[j+1]=a[j];
                    a[j]=t;
                    swapped= true;
                }
            }
            if(swapped==false)
                break;
        }

        if(c>((n*(n-1)/2)-1))
            cout<<"NO"<<'\n';
        else
            cout<<"YES"<<'\n';

    }
}
