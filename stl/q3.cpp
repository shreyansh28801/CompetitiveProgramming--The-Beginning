#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    multiset<pair<int,string>> s1;
    while (n--)
    {
        string s;
        int x;
        cin>>s>>x;
        s1.insert({-1*x,s});

    }
    for(auto &i:s1){
        cout<<i.second<<" "<<i.first*-1<<"\n";
    }
    

    return 0;
}