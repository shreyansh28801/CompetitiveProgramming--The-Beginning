#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int hsh[26][N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, q;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 26; i++)
        {
            for (int j = 1; j <= n + 1; j++)
            {
                /* code */
                hsh[i][j] = 0;
            }
        }

        cin >> n >> q;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            /* code */
            hsh[s[i] - 'a'][i + 1]++;
        }
        //prefix of each character
        for (int i = 0; i < 26; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                /* code */
                hsh[i][j] += hsh[i][j - 1];
            }
        }

        while (q--)
        {
            int l, r; //l and r are given w.r.t. 1 base indexing
            cin >> l >> r;
            int od_ct = 0;
            for (int i = 0; i < 26; i++)
            {
                if ((hsh[i][r] - hsh[i][l - 1]) % 2 != 0)
                {
                    /* code */
                    od_ct++;
                }
            }
            if (od_ct > 1)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }

    return 0;
}