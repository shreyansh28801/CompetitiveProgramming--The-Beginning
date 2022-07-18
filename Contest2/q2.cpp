#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;

int ar[N][N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m, n;
    cin >> m >> n;
    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            int x;
            cin>>x;
            ar[i][j]=(x&1);
            
        }
    }
  

    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
           
            ar[i][j] = ar[i][j - 1] +ar[i - 1][j] - ar[i - 1][j - 1] + ar[i][j];
        }
    }
   

    int q;
    cin >> q;
    while (q--)
    {
        int l1, r1, l2, r2;
        cin >> r1 >> l1 >> r2 >> l2;
        cout << ar[r2][l2] - ar[r2][l1 - 1] - ar[r1 - 1][l2] + ar[r1 - 1][l1 - 1] << "\n";
    }


    return 0;
}