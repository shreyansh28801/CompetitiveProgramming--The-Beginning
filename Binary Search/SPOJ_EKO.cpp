#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e6 + 10;

ll v[N];

ll n, m1;

bool woodGainedAtHeightH(ll H)
{

    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] >= H)
            ans += (v[i] - H);
    }
    return ans >= m1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m1;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];       
    }
    // cout << n << "  " << m1 << endl;
    ll s = 0, e = 1e9, m;
    bool temp;

    while (e-s>1)
    {
        m = (s + ((e - s) / 2));

        // cout <<s<<"   "<<e<<"   " << m<<endl;

        if (woodGainedAtHeightH(m))
        {
            s = m;
        }
        else
        {
            e = m - 1;
        }
    }
    if(woodGainedAtHeightH(e))  cout<<e<<endl;
    else    cout<<s<<endl;
    

    return 0;
}