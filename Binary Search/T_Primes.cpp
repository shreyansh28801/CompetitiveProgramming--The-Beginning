#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e7 + 10;

vector<bool> isPrime(N, 1);

void seiveAlgo()
//T . C.  =>  O(N*log(log(N)))
{
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i < N; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = 2 * i; j < N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    seiveAlgo();
    int n;
    cin>>n;
    while (n--)
    {
     
        ll x;
        cin >> x;
        // cout<<"  x is  " <<x<<endl;
        if(x<=3) {
            cout<<"NO\n";
            continue;
        }
        ll s = 1, e = 1e6, m;
        int flag = 0;
        while (e - s >= 0)
        {
            m = (e+s)/2;
            // cout<<s<<"   "<<m<<"   "<<e<<"   " << m*m <<endl;
            if (m * m == x)
            {
                flag = 1;
                // cout<<"   square root  " <<m<<  "    "<<isPrime[m] << endl;
                if (isPrime[m] == 1)
                    cout << "YES\n";
                else
                {
                    cout << "NO\n";
                }
                break;
            }
            else if (m * m > x)
                e = m - 1;
            else
                s = m + 1;
        }
   
     
      if (1 != flag)
            cout << "NO\n";
    }

    return 0;
}