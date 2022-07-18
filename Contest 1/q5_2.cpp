#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    set<int> s;
    int lcm = (a * b) / __gcd(a, b);
    for (int i = 1; i < 1001; i++)
    {
        s.insert(a*i);
        s.insert(b*i);
        s.insert(lcm*i);
    }
    int i=1;vector<int> v;
    v.push_back(-1);
    for (auto i1 : s)
    {
        /* code */
        if (i>1001)
        {
            break;
        }
        v.push_back(i1);
        // cout<<i1<<"  ";
        i++;
        
    }
    
    int c_v=v[c];int st;
    if (c_v%lcm==0)
    {
        st=lcm;
    }
    else  if (c_v%a==0)
    {
        st=a;
    }
    else    st=b;
    for (int i = c_v; i >=0; i-=st)
    {
        cout<<i<<" ";
    }
    
    
    

    return 0;
}