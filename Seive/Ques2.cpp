#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPerfectSquare(ll num, ll *sqt)
{
    long long int s, e, m;
    s = 0;
    long long int temp;
    e = 1000000;
    
    while (s <= e)
    {
        m = s + ((e - s) >> 2);
        temp = m * m;
        if (temp == num)
        {
            *sqt = m;
            return true;
        }
        else if (temp > num)
            e = m - 1;
        else
        {
            s = m + 1;
            // ans=m;
        }
    }
    return false;
}

bool isPrimeOptimize(int n)
//T.c. => O(sqrt(n))
//Given n!=1
{
    bool isPrime = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    ll arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    ll square_root;
    for (int i = 0; i < t; i++)
    {
        if (arr[i]==1)
        {
            cout<<"NO\n";
            continue;
        }
        
        if (isPerfectSquare(arr[i], &square_root))
        {
            arr[i] /= (square_root);
            arr[i] /= (square_root);
            if (arr[i] == 1  && isPrimeOptimize(square_root))
            {
                cout << "YES\n";
                continue;
            }
        }
        cout << "NO\n";
    }

    return 0;
}