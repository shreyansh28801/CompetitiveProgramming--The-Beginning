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

bool isItPossible(vector<int> &v, int m, int k)
{
    int ct = 0;
    int sum = 0;

    for (int j = 0; j < v.size(); j++)
    {

        sum += v[j];
       if(sum>m)
        {
 
            ct++;
            sum = v[j];
        }
        
    }
    
    ct++;
    return ct <= k;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /*
    const int N_local = 1e5;
    vector<int> v(N_local);
    */
    ll n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    auto it = max_element(v.begin(), v.end());

    int s = *it, e = accumulate(v.begin(), v.end(), 0), m;

    cout << " s e " << s << "   " << e << endl;
int ans;
    while (e - s >= 0)
    {
        m = s + (e - s) / 2;
        cout << s << "    " << e << "   " << m << endl;
        if (isItPossible(v, m, k)){
                ans=m;
            e = m - 1;
        }
        else
            s = m + 1;
        
    }
    cout<<ans;
    
    return 0;
}