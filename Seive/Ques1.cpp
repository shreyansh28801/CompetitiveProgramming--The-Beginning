#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isPrime(n,1);  
        int ct=0;
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i < n; i++)
        {
            if (isPrime[i] == true)
            {
                ct++;
                for (int j = 2 * i; j < n; j += i)
                {
                    isPrime[j] = false;
                }
            }
        }
        return ct;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution obj;
    cout<<"ans is :  "<< obj.countPrimes(5000000);
    
    return 0;
}