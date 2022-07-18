#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        unordered_set<long long> s;
        for (int i = 0; i < n; i++)
        {
            long long  x;
            cin >> x;
            s.insert(x);
            // cout<<"\nhrello";
        }
        for (int i = 0; i < m; i++)
        {
            long long  y;
            cin >> y;
            // auto it = s.find(y);
            if (s.find(y) != s.end())
            {
                cout << "Yes\n";
                // s.erase(it);
            }
            else{

                cout << "No\n";
                s.insert(y);
            }
        }
    }

    return 0;
}