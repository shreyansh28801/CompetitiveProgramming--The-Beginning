#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
typedef long long ll;


int binaryExponentiationIterativeApproach(int a, int b , int M1)
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







int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //We want to calucate MMI of q numbers 
    int q;
    cin>>q;
    while (q--)
    {
        int n;
        cin>>n;
        cout<<"MMI of "<<n<<"  is  "<<binaryExponentiationIterativeApproach(n,M-2,M);
    }
    
    
    return 0;
}