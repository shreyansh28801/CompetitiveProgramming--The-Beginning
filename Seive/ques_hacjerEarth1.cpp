#include <bits/stdc++.h>
using namespace std;
const int M = 1e6 + 3;
typedef long long ll;

int binaryExponentiationIterativeApproach(int a, ll b, int M1)
// we have to return a^b(b is exponent of a) and b is like c^d
//  a,M<=10^9

//T.Com.   =>  log(b)
{
    int ans = 1;
    while (b > 0)
    {

        if ((b & 1) > 0)
        {
            ans = (a * 1ll * ans) % M1;
        }
        a = (a * 1ll * a) % M1;
        b >>= 1;
    }
    return ans;
}

vector<bool> isPrime(M, 1);
vector<int> hp(M, 0); //hp[i]  denotes the highest prime factor of number i
vector<int> lp(M, 0); //lp[i]  denotes the lowest prime factor of number i

void seiveAlgo()
//T . C.  =>  O(N*log(log(N)))
{
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i < M; i++)
    {
        if (isPrime[i] == true)
        {
            hp[i] = lp[i] = i;
            for (int j = 2 * i; j < M; j += i)
            {
                isPrime[j] = false;
                hp[j] = i;
                if (lp[j] == 0)
                {
                    lp[j] = i;
                }
            }
        }
    }
}

int sumOfPrimeFactorizationBestOptimized(int n)
//T. C. => O(log(n))
{
    // vector<int> r;
    int sum=0;
    while (n > 1)
    {
        int i = hp[n]; // one may use lp[n] also here .
        while ((n % i) == 0)
        {
            n /= i;
            sum+=i;
        }
    }

    return sum;
}

int main()
{
    int q;
    cin >> q;
    seiveAlgo();
    while (q--)
    {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        int temp = binaryExponentiationIterativeApproach(a, binaryExponentiationIterativeApproach(b, c, M - 1), M);
        temp = (temp + 1) % M;

        int sum = sumOfPrimeFactorizationBestOptimized(temp);
        
        cout << sum << "\n";
    }
}