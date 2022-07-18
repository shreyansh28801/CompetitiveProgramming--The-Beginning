#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
typedef long long ll;


const int Mll = 1e18 + 7;


int binaryExponentiationIterativeApproach(int a, int b , int M1)
// we have to return a^b(b is exponent of a) and b is like c^d
//  a,M<=10^9  

//T.Com.   =>  log(b)
{
    int ans = 1;
    while (b > 0)
    {
        
        if ((b & 1) > 0)
        {
            ans= (a*1ll*ans)%M1;
        }
        a = (a*1ll*a)%M1;
        b >>= 1;
    }
    return ans;
}





//Ques leetcode
class Solution {
public:
    

    int binaryExponentiationIterativeApproach(int a, int b , int M1)
    // we have to return a^b(b is exponent of a) and b is like c^d
    //  a,M<=10^9  

    //T.Com.   =>  log(b)
    {
        int ans = 1;
        while (b > 0)
        {

            if ((b & 1) > 0)
            {
                ans= (a*1ll*ans)%M1;
            }
            a = (a*1ll*a)%M1;
            b >>= 1;
        }
        return ans;
    }
    int superPow(int a, vector<int>& vec_b) {
        int M1=1337;
        int M2=1140;//ETF value of 1337
        int sz=vec_b.size()-1;
        int ans=1;
        int power_actual=0;

        for (int i = 0; i <= sz ; i++)
        {
            int b=binaryExponentiationIterativeApproach(10,i,M2);
            b = (b*1ll*vec_b[sz-i])%M2;
            power_actual = (power_actual+b)%M2;       
        }
        ans= binaryExponentiationIterativeApproach(a,power_actual,M1);
        
        return ans;
    }
};









int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // we have to return a^b(b is exponent of a) and b is like c^d(c^d may be beyond long long )  . So actually we want to calculate (a^(c^d)%M)
    //Using ETF theorm 
    //      (a^(c^d)%M)    =>  (a^((c^d)%f(M))%M)   for any value of M and  where f(M)  is  ETF function 
    //      (a^(c^d)%M)    =>  (a^((c^d)%(M-1)%M)  if M is  Prime  number and  f(M) =M-1 , if M is  Prime  number
    int a,c,d,m;
    m=M;//M is a prime number now 
    cin>>a>>c>>d;

    binaryExponentiationIterativeApproach(a,binaryExponentiationIterativeApproach(c,d,m-1),m);
    
    return 0;  
}