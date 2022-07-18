#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
typedef long long ll;

vector<int> isPrime(N, 1);
vector<int> A(N, 0);
vector<int> power(N, 0);

vector<int> lp(N, 0);
vector<int> hp(N, 0);

void seive()
{
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i < N; i++)
    {
        if (isPrime[i] == true)
        {
            hp[i] = lp[i] = i;
            for (int j = 2 * i; j < N; j += i)
            {
                isPrime[j] = false;
                if (lp[j] == 0)
                {
                    lp[j] = i;
                }
                hp[j] = i;
            }
        }
    }
}

vector<int> primeFactorization(int x)
{
    vector<int> vr;
    while (x > 1)
    {
        int i = hp[x];
        while (x % i == 0)
        {
            vr.push_back(i);
            x /= i;
        }
    }
    return vr;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cout<<"\nhello\n";
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        A[x]++;
        
    }
    seive();
    while (q--)
    {
        int x;
        cin >> x;
        vector<int> s1 = primeFactorization(x);
        bool isYes = false;
        for (auto i = s1.begin(); i != s1.end(); i++)
        {
            for (auto j = i; j != s1.end(); j++)
            {
                int a, b;
                a = *i;
                b = *j;
                ll pr_ml = x / (a * 1ll * b);
                while (pr_ml > 1)
                {
                    int i = hp[x];
                    if (A[i] != 0)
                    {
                        /* code */
                        while (x % i == 0)
                        {
                            // vr.push_back(i);
                            x /= i;
                        }
                    }
                    else
                        break;
                }
                if (x <= 1)
                {
                    isYes = true;
                    break;
                }
            }
            if (isYes==true)
            {
                break;
            }
            
        }
        if (isYes)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
    }
    return 0;
}