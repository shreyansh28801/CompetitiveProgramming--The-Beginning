#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    if(n&1) cout<<0<<"\n";
    else
    {
        if ((n/2)&1)
        {
            cout<<(n>>2)<<"B\n";
        }
        else    cout<<(n>>2)-1<<"C\n";
        
    }
  
    return 0;
}