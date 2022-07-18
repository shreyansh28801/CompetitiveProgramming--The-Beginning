// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e6 + 10;

// vector<int> isPrime(N, 1);
// vector<int> A(N, 0);
// // vector<bool> isPrime(N, 1);
// vector<int> hp(N, 0); //hp[i]  denotes the highest prime factor of number i
// vector<int> lp(N, 0); //lp[i]  denotes the lowest prime factor of number i

// void seiveAlgo()
// //T . C.  =>  O(N*log(log(N)))
// {
//     isPrime[0] = isPrime[1] = false;

//     for (int i = 2; i < N; i++)
//     {
//         if (isPrime[i] == true)
//         {
//             hp[i] = lp[i] = i;
//             for (int j = 2 * i; j < N; j += i)
//             {
//                 isPrime[j] = false;
//                 hp[j] = i;
//                 if (lp[j] == 0)
//                 {
//                     lp[j] = i;
//                 }
//             }
//         }
//     }
// }


// vector<int> primeFactorizationBestOptimized(int n)
// //T. C. => O(log(n))
// {
//     vector<int> r;
//     while (n > 1)
//     {
//         int i = hp[n]; // one may use lp[n] also here .
//         while ((n % i) == 0)
//         { 
//             n /= i;
//             r.push_back(i);
//             // prime_factr[i]++;
//         }
//     }

//     return r;
// }


// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n, q;
//     cin >> n >> q;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         A[x]++;
//     }
//     seiveAlgo();
//     while (q--)
//     {
//         // cout<<"hfhgfhj";
//         int x;
//         cin >> x;
//         vector<int> v = primeFactorizationBestOptimized(x);
//         int sz=v.size();
//         if (sz==2)
//         {
//             cout<<"YES\n";
//         }
//         else if(sz<2) {
//                 cout<<"NO\n";
//         }
//         else{

//         }
        
            
//         // }
//         // if (ans>=2)
//         // {
//         //     cout<<"YES\n";
//         // }
//         // else cout<<"NO\n";
        
        
//     }

//     return 0;
// }









































#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;

vector<int> isPrime(N, 1);
vector<int> A(N, 0);

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
        // vector<int> v = primeFactorization(x);
        // int ans=0;
        // for (int i = 0; i < v.size(); i++)
        // {
        //     if (A[v[i]]>0)
        //     {
        //         ans++;
        //     }

        // }
        // vector<int> v;
        int x1 = x;
        while (x > 1)
        {
            int i = hp[x];
            while (x % i == 0)
            {
                // vr.push_back(i);
                if (A[i]>0)
                {
                    x1/=i;
                }
                
                x /= i;
            }
        }

        // int siz = v.size();
        if (primeFactorization(x1).size() <= 2)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}