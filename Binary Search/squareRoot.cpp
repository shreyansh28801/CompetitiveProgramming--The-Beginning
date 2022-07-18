#include <bits/stdc++.h>
using namespace std;

double eps = 1e-6;

double mul(double m,int n){
    double ans=1;
    while (n--)
    {
        ans*=m;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double n,n1;
    cin >> n>>n1;
    // cout<<eps;
    double s = 1, e = n, m;
    
    while (e - s > eps)
    {
        m = s + (e - s) / 2;
        cout<<s<<"                    "<<e<<"                    "<<m<< "             "<<e-s <<"       "<<m*m <<"\n";
        if (mul(m,3) < n)
        {
            s= m;
        }
        else
        {
            e= m;
        }
    }
    
    cout<<s<<"\n";
     cout<<e<<"\n";
     cout<<" pow  "<<pow(2,1.0/2);

    double a1=50.2665;
    double a2=25.1327;
    int df=a1/a2;
    cout<<"\n df id "<<df;

    return 0;
}