#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        map<char, int> m;
        m['r'] = 0;
        m['u'] = 0;
        m['b'] = 0;
        m['y'] = 0;
        for (auto i : s)
        {
            /* code */
            m[i]++;
        }
        int f = 0;

        int mx = INT_MAX;
        if ((m['r'] * m['u'] * m['b'] * m['y']) == 0)
        {
            cout << "0\n";
            continue;
        }
        mx=min(min(min(m['r'],m['u']),m['b']),m['y']);
        cout<<mx<<"\n";
    }

    return 0;
}