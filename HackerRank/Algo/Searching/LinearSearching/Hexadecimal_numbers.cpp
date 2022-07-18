#include <bits/stdc++.h>
using namespace std;


int decimalToHexadecimal(int n)
//we are returning sum of digis in hexadecimal format
{
    int s = 0;
    while (n > 0)
    {
        s += (n % 16);
        n /= 16;
    }
    return s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // seiveAlgo();
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int ct = 0;
        for (int i = l; i < r + 1; i++)
        {
            int hex_sum = decimalToHexadecimal(i);

            if (__gcd(i, hex_sum) > 1)
            {
                // cout << hex_sum << " " << i << "     ";
                /* code */
                ct++;
            }
        }
        cout << ct << "\n";
    }

    return 0;
}