#include <bits/stdc++.h>
using namespace std;

// Ques Link =>  https://codeforces.com/contest/776/problem/B

void seive(vector<bool> &isPrime, vector<int> &rv)
{

    int ans = 1;
    int N = isPrime.size();
    for (int i = 2; i < N; i++)
    {
        if (isPrime[i])
        {
            rv[i] = 1;

            for (int j = 2 * i; j < N; j += i)
            {

                isPrime[j] = false;

                rv[j] = 2;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<bool> isPrime(n + 2, 1);
    vector<int> r(n + 2);

    seive(isPrime, r);
    if (n == 1 || n==2)
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << 2<< "\n";
    }

    for (int i = 2; i < n + 2; i++)
    {
        /* code */
        cout << r[i] << " ";
    }

    return 0;
}