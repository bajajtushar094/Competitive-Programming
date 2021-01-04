#include <bits/stdc++h>
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

    int start=end=middle=0;

    for(int i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            start=i+1;
        }

        if(a[i]>a[i+1])
        {
            end=i+1;
        }
    }

    cout<<end-start;
}
