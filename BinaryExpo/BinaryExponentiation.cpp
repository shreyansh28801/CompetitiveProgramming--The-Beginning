#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;

int binaryExponentiationRecursiveApproach(int a, int b)
// we have to return a^b(b is exponent of a)
//  a,b,M<=10^9
{
    if (b == 0)
    {
        return 1;
    }
    int temp = binaryExponentiationRecursiveApproach(a, b/2);
    if (b & 1 != 0)
    {
        
        return (a * ((temp * 1ll * temp) % M) )% M;
    }
    else
    {
        
        return (temp * 1ll * temp) % M;
    }
}



int binaryExponentiationIterativeApproach(int a, int b)
// we have to return a^b(b is exponent of a)
//  a,b,M<=10^9
//T.Com.   =>  log(b)
{
    int ans = 1;
    while (b > 0)
    {
        
        if ((b & 1) > 0)
        {
            ans= (a*1ll*ans)%M;
        }
        a = (a*1ll*a)%M;
        b >>= 1;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << binaryExponentiationRecursiveApproach(2, 25) << "        " << binaryExponentiationIterativeApproach(2, 25) << "\n";
    cout << binaryExponentiationRecursiveApproach(3, 10) << "        " << binaryExponentiationIterativeApproach(3, 10) << "\n";
    cout << binaryExponentiationRecursiveApproach(2, 3)  << "        " << binaryExponentiationIterativeApproach(2, 3)  << "\n";
    cout << binaryExponentiationRecursiveApproach(3, 3)  << "        " << binaryExponentiationIterativeApproach(3, 3)  << "\n";
    cout << binaryExponentiationRecursiveApproach(2, 5)  << "        " << binaryExponentiationIterativeApproach(2, 5)  << "\n";
    cout << binaryExponentiationRecursiveApproach(2, 10) << "        " << binaryExponentiationIterativeApproach(2, 10) << "\n";
    cout << binaryExponentiationRecursiveApproach(2, 20) << "        " << binaryExponentiationIterativeApproach(2, 20) << "\n";
    cout << binaryExponentiationRecursiveApproach(2565765, 20) << "        " << binaryExponentiationIterativeApproach(2565765, 20) << "\n";
   
   
    

    return 0;
}