#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;
    cin>>n>>m;
    map<string, string> chef_country;
    map<string, int> chef_mails;
    map<string, int> chef_mails_country;

    for(int i=0;i<n;i++)
    {
        string chef,country;
        cin>>chef>>country;
        chef_country[chef]=country;
    }

    for(int i=0;i<m;i++)
    {
        string chef;
        cin>>chef;
        chef_mails[chef]++;
        chef_mails_country[chef_country[chef]]++;
    }

    int max_chef=-1;
    int max_country=-1;
    set<string> chef_winner,country_winner;
    for(auto it : chef_mails)
    {
        if(it.second > max_chef)
        {
            max_chef=it.second;
        }
    }

    for(auto it : chef_mails)
    {
        if(it.second == max_chef)
        {
            chef_winner.insert(it.first);
        }
    }

    for(auto it2 : chef_mails_country)
    {
        if(it2.second > max_country)
        {
            max_country=it2.second;
        }
    }

    for(auto it : chef_mails_country)
    {
        if(it.second == max_country)
        {
            country_winner.insert(it.first);
        }
    }

    cout<<*(country_winner.begin())<<'\n'<<*(chef_winner.begin())<<'\n';
}
