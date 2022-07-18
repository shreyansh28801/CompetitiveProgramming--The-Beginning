#include <bits/stdc++.h>
using namespace std;
const int N= 1e5+10;
int A[N];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    for (int i = 1; i < n; i++)
    {
        A[i]+=A[i-1];
    }
    
    int m;
    cin>>m;
    while (m--)
    {
        int x;
        cin>>x;
        
        auto it = lower_bound(A,A+n,x);
        int i= it-A;
        cout<<i+1<<endl;        
    }
    


    return 0;
}