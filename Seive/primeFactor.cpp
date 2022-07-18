#include <bits/stdc++.h>
using namespace std;

//naive approach
bool isPrime(int n)
//T.c. => O(n)
//Given n!=1
{
    bool isPrime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

//square root complexity  approach
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

vector<int> primeFactorization(int n)
//T. C. => O(n)
{
    vector<int> r;
    for (int i = 2; i < n; i++)
    {
        while (n % i == 0)
        {
            r.push_back(i);
            n /= i;
        }
    }
    return r;
}

vector<int> primeFactorizationOptimized(int n)
//T. C. => O(sqtr(n))
{
    vector<int> r;
    for (int i = 2; i*i <=  n; i++)
    {
        while (n % i == 0)
        {
            r.push_back(i);
            n /= i;
        }
    }
    if (n>1)
    {
        r.push_back(n); 
    }
    
    return r;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // cout<<isPrime(1e6+3);
    // cout<<isPrimeOptimize(1e6+3);

    // vector<int> v=primeFactorizationOptimized(12);
    // for (auto i : v)
    // {
    //         cout<<"    "<<i;
    // }
    // cout<<"\n";
    // vector<int> v1=primeFactorizationOptimized(6);
    // for (auto i : v1)
    // {
    //         cout<<"    "<<i;
    // }
    // cout<<"\n";
    // vector<int> v2=primeFactorizationOptimized(158);
    // for (auto i : v2)
    // {
    //         cout<<"    "<<i;
    // }
    // cout<<"\n";
    // for (int i = 0; i < 501; i++)
    // {
    //     if (isPrime(i))
    //     {
    //         cout<<i<<"   ";
    //     }
        
    // }
    cout<<"43 is prime "<<isPrime(43);
    

    return 0;
}