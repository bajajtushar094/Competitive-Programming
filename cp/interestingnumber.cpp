#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    int sum=0;
    for(int i=n;i>0;i/=10)
    {
        int a=i%10;
        sum+=a;
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;

    for(int i=n;;i++)
    {
        if(sum(i)%4==0)
        {
            n=i;
            break;
        }
    }

    cout<<n<<'\n';
}
