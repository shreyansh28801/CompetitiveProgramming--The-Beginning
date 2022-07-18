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
        string s0;
        cin>>s0;
        int n=s0.size();
        if (1==n)
        {
            cout<<"No\n";
            continue;
        }
        
        /*
        s0="tata" ,wowowow
        n=4,3
        s1=0 - (n/2),
        s2=0 - (n/2),
        */
        string s1 (s0, 0, n/2);
        int i_n;

        if (1&(n/2))
        {
            //(n/2) is odd
            i_n=(n/2)+1;
        }
        else
        {
            
            i_n=(n/2);
        }
         string s2 (s0, i_n,n/2);
        if (s1==s2)
        {
            cout<<"Yes\n";
        }
        else cout<<"No\n";
    }
    
    return 0;
}