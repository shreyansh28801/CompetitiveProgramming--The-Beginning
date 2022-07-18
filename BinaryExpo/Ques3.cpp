#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int M=1e6+3;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int fact[M];
    fact[0]=fact[1]=1;
    for (int i = 2; i < M; i++)
    {
        fact[i]=(i*1ll*fact[i-1])%M;
    }
    
    int t;
    cin>>t;
    while (t--)
    {
        ll n,x;
        cin>>n>>x;
        ll ans=x;
        if (n>M)
        {
            cout<<"0\n";
        }
        else    cout<<(fact[n]*1ll*x)%M<<"\n";
        
    }
    
    
    return 0;
}