#include <bits/stdc++.h>
using namespace std;

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

    for (int i = 0; i < 50; i++)
    {
        cout << i << "       " << isPrime[i] << "\n";
    }

    //Given q queies and in each query a number is given . find the number in each query is prime or not .
    //q<=10^7  and  N<= 10^7
    // if we use naive approach then Time Complexity => q*sqrt(N)  =>  it is aroud 10^11 which will not work in  cp in given Time limit
    //using seive method  Time Complexity => q*O(1)  =>  it is aroud 10^7 hich will  work in cp within 1 sec
    // int q;
    // cin>>q;
    // while (q--)
    // {
    //     int n;
    //     cin>>n;
    //     if (isPrime[n])
    //     {
    //         cout<<"Prime\n";
    //     }
    //     else{
    //         cout<<"Not prime\n";
    //     }

    // }

    return 0;
}