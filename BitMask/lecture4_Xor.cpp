#include <bits/stdc++.h>
using namespace std;

void swapUsingXor(int &a, int &b)
{
    a = a ^ b;
    b = b ^ a; //b=b^(a^b)  =>  b=a
    a = b ^ a; //a^(a^b)    =>  a=b
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    x^x=0
    x^0=x
    xor is associative (a^(b^c) =((a^b)^c))
    */
    int x = 5328;
    cout << __builtin_clz(x) << "\n";      // 19
    cout << __builtin_ctz(x) << "\n";      // 4
    cout << __builtin_popcount(x) << "\n"; // 5
    cout << __builtin_parity(x) << "\n";   // 1
    cout << __builtin_parity(x-1) << "\n";   // 0
    return 0;

    
}