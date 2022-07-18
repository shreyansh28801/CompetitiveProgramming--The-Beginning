#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long int li;
typedef long double ld;
#define lb lower_bound
#define ub upper_bound
#define pub push_back
#define pob pop_back
typedef long double ld;

/*

const int N = 1e7+10 ;
vector<int> A(N) ;


*/

bool isItPossible(int m, vector<int> &v, int days)
{
    int ct = 0;
    int s = 0;
    cout << "\n\n";
    for (int i = 0; i < v.size(); i++)
    {
        s += v[i];
        cout << s << "  " << ct << endl;
        if (s >= m)
        {
            ct++;
            if (s == m)
                s = 0;
            else
                s = v[i];
        }
    }
    if (s != 0)
        ct++;
    cout << "   ct  " << ct << endl
         << endl;
    return ct <= days;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // const int N_local = 1e5;
    int days = 5;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    auto it = max_element(v.begin(), v.begin() + n);
    ll sum = accumulate(v.begin(), v.end(), 0);
    int s = *it, e = sum, m;
    while (e - s > 0)
    {
        m = s + (e - s) / 2;
        cout << s << "  " << m << "  " << e;
        if (isItPossible(m, v, days))
            e = m;
        else
            s = m + 1;
        cout << endl;
    }
    cout << s << "  " << m << "  " << e << endl;
    cout<<"ans "<<isItPossible(e,v,5);

    return 0;
}