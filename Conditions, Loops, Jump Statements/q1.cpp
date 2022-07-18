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
        int n;
        cin >> n;
        int N = n;
        while (n--)
        {
            int i=N-n;
            int n1 = n * 2;
            int i_last = i + n1;
            int j;
            for (j = 1; j < i + 1; j++)
            {
                /* code */
                cout << '*';
            }

            for (j = i + 1; j <= i_last; j++)
            {
                cout << '#';
            }
            for (; j <= 2 * N; j++)
            {
                cout << '*';
            }
            cout << "\n";
        }
    }
    cout << "\n";

    return 0;
}