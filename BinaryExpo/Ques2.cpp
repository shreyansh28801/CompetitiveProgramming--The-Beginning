#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;


int binaryExponentiationIterativeApproach(int a, int b , int M1)
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
    int t;
    cin>>t;
    int arr[1000001];
    arr[0]= arr[1]=1;
    for (int i = 2; i < 1e6+1; i++)
    {
        arr[i] =(arr[i-1]*1ll*i)%M;
    }
    

    while (t--)
    {
        int n,k;
        cin>>n>>k;
        if(n==1){
            cout<<"1\n";
            continue;
        }
        int numeratorOf_nCk=arr[n];
        int den_nCk=(arr[k]*1ll*arr[n-k])%M;
        int nCk = (numeratorOf_nCk * 1ll * binaryExponentiationIterativeApproach(den_nCk,M-2,M))%M;
        int noOfWays=binaryExponentiationIterativeApproach(2,k,M);
        int ans = (nCk*1ll*noOfWays)%M;
        cout <<ans<<"\n";

    }
    
    return 0;
}




