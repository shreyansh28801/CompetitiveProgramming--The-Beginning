#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


bool isPerfectSquare(ll num, ll *sqt)
{
    long long int s, e, m;
    s = 0;
    long long int temp;
    e = num;
    
    while (s <= e)
    {
        m = s + ((e - s) >> 2);
        temp = m * m;
        if (temp == num)
        {
            *sqt = m;
            return true;
        }
        else if (temp > num)
            e = m - 1;
        else
        {
            s = m + 1;
            // ans=m;
        }
    }
    return false;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        
    }
    
    return 0;
}