#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int overs,players,maximum;
        cin>>overs>>players>>maximum;
        if(players*maximum<overs)
              cout<<-1<<'\n';
        else
        {
            int bowlers=0;
            int count =0;
            int o=1;;
            for(int i=1;;i++)
            {
                if (o%2!=0)
                {
                    bowlers++;
                }
                else
                    bowlers--;

                if(bowlers<=players)
                {
                    count++;
                    cout<<bowlers<<' ';
                }
                else
                {
                    i=0;
                }
                if(count==overs)
                    break;

                if(count == players)
                    o++;
                else if(count == 0)
                    o++;

            }
        }

    }
}
