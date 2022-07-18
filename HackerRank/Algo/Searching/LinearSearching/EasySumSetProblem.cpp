#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n;
    vector<int> vn(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vn[i];
    }
    cin >> m;
    vector<int> vm(m);
    for (int i = 0; i < m; i++)
    {
        cin >> vm[i];
    }
    set<int> s;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vm[i] > vn[j])
            {
                s.insert(vm[i] - vn[j]);
            }
        }
    }
    auto it= s.find(vm[0]);
    it++;
    s.erase(it,s.end());
    int i;auto ps = s.begin();//two pointer approach to delete some intial  value from set
  
    for ( i = 0; i < n; )
    {
        auto ps = s.begin();
        if((vn[i]+(*ps))>= vm[0])
        {
            /* code */
            break;
        }
        
        while((vn[i]+(*ps))<vm[0]){
            s.erase(s.begin());
            ps++;
        }
        
    }
    
    for(auto i:s)
    {
        cout<<i<<" ";
    }

    return 0;
}