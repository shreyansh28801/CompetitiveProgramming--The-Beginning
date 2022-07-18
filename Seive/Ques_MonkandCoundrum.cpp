#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
typedef long long ll;

vector<int> hsh(N, 0);
vector<int> multiple_ct(N, 0);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        hsh[x]++;
    }

    for (int i = 1; i < N; i++)
    {
        for (int j = i; j < N; j+=i)
        {
            multiple_ct[i]+=hsh[j];
        }
        
    }

    for (int i = 0; i < 10; i++)
    {
        cout<<i<<"   "<<multiple_ct[i]<<"\n";
    }
    
    

    int t;
    cin >> t;
    while (t--)
    {
        int p, q;
        cin >> p >> q;
        int ans = multiple_ct[p] + multiple_ct[q] ;
        ll lcm=(p*1ll*q)/__gcd(p,q);
        if (lcm>N)
        {
            cout<<ans<<"\n";
        }
        else
            cout << ans - multiple_ct[lcm]<< "\n";
    }

    return 0;
}