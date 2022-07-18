#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9+7;



ll binaryExponentiationIterativeApproach(ll a, ll b)
{
    ll ans = 1;
    while (b > 0)
    {        
        if ((b & 1) > 0)
        {
            ans= (a*ans)%M;
        }
        a = (a*a)%M;
        b >>= 1;
        // cout<<"   "<<ans;
    }
    return ans;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int g;
    ll f;
    f=1;
    g=0;
    for (int i = 0; i < n; i++)
    {
        g=__gcd(v[i],g);
    }
    for (int i = 0; i < n; i++)
    {
        f= (f*v[i])%M;
    }
    ll ans = binaryExponentiationIterativeApproach(f,g);
    cout<<ans<<"\n";
    
    

    
    return 0;
}