#include <bits/stdc++.h>
using namespace std;



// Ques link  -    https://www.codechef.com/problems/GCDQ

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> v(n+10),prefix(n+10),suffix(n+10);
        
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        prefix[0]=suffix[n+1]=0;
        for (int i = 1; i < n+1; i++)
        {
            prefix[i]=__gcd(prefix[i-1],v[i]);
        }
        suffix[n]=v[n];
        for (int i = n; i >0; i--)
        {
            suffix[i]=__gcd(suffix[i+1],v[i]);
        }
        
        

        while (q--)
        {
            int l, r;
            cin>>l>>r;
            int ans= __gcd(prefix[l-1],suffix[r+1]);
            cout<<ans<<"\n";                    
        }
    }

    return 0;
}