#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
typedef long long ll;

// Ques link =>  https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/rhezo-and-big-powers-1/

int binaryExponentiationIterativeApproach(int a, ll b)
// we have to return a^b(b is exponent of a)
//  a<=10^9,M=10^9+7  and  b<=10^(10^5)
//T.Com.   =>  log(b)
{
    ll ans = 1;
    while (b > 0)
    {
        
        if ((b & 1) > 0)
        {
            ans= (a*ans)%M;
        }
        a = (a*1ll*a)%M;
        b >>= 1;
    }
    return ans;
}


int main() {
	int a;
    ll b;
	cin >> a>>b;    //Reading input from STDIN

	int ans=binaryExponentiationIterativeApproach(a, b);
	cout<<ans<<"\n";

    return 0;
	
}