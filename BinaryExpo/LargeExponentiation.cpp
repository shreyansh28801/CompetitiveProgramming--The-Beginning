#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
typedef long long ll;


const int Mll = 1e18 + 7;


int binaryExponentiationIterativeApproach(ll a, int b)
// we have to return a^b(b is exponent of a)
//  b,M<=10^9   and   a<=10^18

//T.Com.   =>  log(b)
{
    int ans = 1;
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





int binaryExponentiationIterativeApproach(long long int a,long long int b)
// we have to return a^b(b is exponent of a)
//  a,b<=10^9   and   M<=10^18
//  T.Com.   =>  O(log(b)*log(b))  =>   O((log(b))^2)
{
    int ans = 1;
    while (b > 0)
    {
        
        if ((b & 1) > 0)
        {
            ans=binaryMultiplication(ans,a);
        }
        //a = (a*a)%Mll;//(a*a) will overflow bcz a <=10^18 in intermediate steps. hence to avoid it we use binary multiplication 
        a=binaryMultiplication(a,a);
        b >>= 1;
    }
    return ans;
}


int binaryMultiplication(ll a,ll b)
//T.Com.   =>  log(b)
{
    int ans = 0;
    while (b > 0)
    {
        
        if ((b & 1) > 0)
        {
            ans= (ans+a)%Mll;
        }
        a = (a+a)%Mll;
        b >>= 1;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    return 0;  
}