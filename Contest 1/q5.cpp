#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    set<int> v;
    // int ia, ib,il;
    int a1, b1,l2;
    a1=a;
    b1=b;

    // ia = il=ib = 2;
    v.insert(-1);
    int lcm = (a * b) / __gcd(a, b);
    int l1=lcm;
    l2=l1;
    for (int i = 1; i < 1001; i++)
    {
        // cout<<"jbjk\n";
        // cout<<a<<"  "<<b<<"  "<<l1<< "\n";
        if (a <= b && a<=l1)
        {
            v.insert(a);
            a += a1;
            // ia++;
        }
        else if (b<=a && b<=l1)
        {
            v.insert(b);
            b += b1;
            // ib++;
        }
        else{
            v.insert(l1);
            l1 += l2;
            // il++;

        }
    }
    cout<<"\n sz is : "<<v.size();
    vector<int> v1;
    for (auto i: v)
    {
        v1.push_back(i);
    }
    
    int cth_val = v1[c];
    cout<<"\n cth value is :  "<<cth_val<<"\n";
    // int lcm = (a * b) / __gcd(a, b);
    int step;
    if (cth_val % lcm == 0)
    {
        step = lcm;
    }
    else if (cth_val % a == 0)
        step = a;
    else
        step = b;
    // for (int i=0; i <=1000; i ++)
    // {
    //     cout << v1[i] << " ";
    // }
    for (int i = cth_val; i >= 0; i -= step)
    {
        cout << i << " ";
    }

    return 0;
}