#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long sum= (n*1ll*(n+1))/2;
    if (1&sum)
    {
        cout<<1;
    }
    else
    {
        cout<<0;
    }
    
    
    return 0;
}