#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        long long m=1;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            m = m*1ll*v[i];
        }
        int a=m%10;
        if (a==2 || a==3  || a==5)
        {
            /* code */
            cout<<"YES\n";
        }
        else    cout<<"NO\n";
        
        
    }
    
    return 0;
}