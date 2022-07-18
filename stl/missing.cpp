#include <bits/stdc++.h>
using namespace std;

 int *fu(int *arr, int n) {
        // code here
        cout<<"\nifhujighjifgjh";
        long long s_s=0;
        long long s_ln=0;
        for(int i=0;i<n;i++){
            s_s+=(arr[i]*1ll*arr[i]);
            s_ln+=arr[i];
        }
         long long n2=0,n1=0;
         n2=(n*1ll*(n+1));
         n2  =  n2*((2*n)+1);
         n2/=6;
         n1=(n*1ll*(n+1))/2;
         n2 -= s_s;
         n1-= s_ln;
         
        //  long long apb=n2/n1;
         int ans[2];
        //  ans[1]=(n1+apb)/2;
        //  ans[0]=apb-ans[1];
         return ans;
        
        
    }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int *ar=fu(arr,n);
    
    
    return 0;
}