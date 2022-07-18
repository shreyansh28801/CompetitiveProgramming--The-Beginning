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
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;

        ll denominator= binaryExponentiationIterativeApproach(2,n-1);
        // cout<<denominator<<"     ";
        ll mmiOf_Denominator=binaryExponentiationIterativeApproach(denominator,M-2);
        cout<<(mmiOf_Denominator)%M<<"\n";
    }
    
    return 0;
}