#include <bits/stdc++.h>
using namespace std;
int n, c;
const int N = 1e5 + 10;
int x[N];

bool canCowPlaced(int minDis)
{
    int cow_ct = c;
    
    int last_pos = -1;
    for (int i = 0; i < n; i++)
    {
        if (x[i] - last_pos >= minDis ||last_pos ==-1)
        {
            last_pos = x[i];
            cow_ct--;
        }
        if(cow_ct==0)   break;
    }
    return cow_ct == 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> c;

        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        sort(x, x + n);
        int s = 0, e = 1e9, m;

        while (e - s > 1)
        {
            // cout<<m<<endl;   
            m = (s + e) / 2;
            if (canCowPlaced(m))
            {
                s=m;
            }
            else
                e=m - 1;
        }
        if (canCowPlaced(e))
            cout << e << endl;
        else
            cout << s << endl;
    }

    return 0;
}