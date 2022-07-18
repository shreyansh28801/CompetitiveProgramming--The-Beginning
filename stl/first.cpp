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
        int n,k;
        cin>>n>>k;
        multiset<long long> s;
        while (n--)
        {
            long long c;
            cin>>c;
            s.insert(c);
        }
        long long ans=0;
        while (k--)
        {
            /* code */
            auto last_it=(--s.end());// O(logn)
            long long candy_cnt=*last_it;
            ans+=(candy_cnt);
            s.erase(last_it);  //O(1) if it would be erase by value then it would have been O(logn)
            s.insert(candy_cnt/2);//O(logn)
        }
        cout<<ans<<"\n";
        
    }
    
    return 0;
}