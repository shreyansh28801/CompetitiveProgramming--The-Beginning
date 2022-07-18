#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;

    int lcm = (a * b) / __gcd(a, b);
    int c_v;
    for (int i = 2; c > 0; i++)
    {
        if (i % a == 0 || i % b == 0)
        {
            c_v = i;
            cout<<i<<"   ";
            c--;
        }
    }
    int st;
    if (c_v % lcm == 0)
    {
        st = lcm;
    }
    else if (c_v % a == 0)
    {
        st = a;
    }
    else
        st = b;
    for (int i = c_v; i >= 0; i -= st)
         cout << i << " ";

    return 0;
}