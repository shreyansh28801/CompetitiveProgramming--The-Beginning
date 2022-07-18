#include <bits/stdc++.h>
using namespace std;
const double eps = 1e-4;
long double pi = 3.14159265358979323846264338327950;
const int N = 1e4 + 10;
double r[N];
int n, f;


bool isItPossible(double m){
    int fr=f+1;
    for (int i = 0; i < n; i++)
    {
        int temp=  r[i]/m;
        // cout<<fr<<"   "<<temp<<endl;
        fr-=temp;
        if(fr<=0) break;

    }
    return fr<=0;
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> f;
        for (int i = 0; i < n; i++)
        {
            cin >> r[i];
        }
      
        for (int i = 0; i < n; i++)
        {
            double gh=r[i]*r[i]*pi;
            r[i]=gh;
            
        }
        auto mx=  max_element(r,r+n);
  
        double s=0,e=*mx,m;
        while (e-s>eps)
        {
            m=(s+e)/2.0;
            
            // cout<<s<<"  "<<e<<"   "<<m<<"   "<<isItPossible(m) <<endl;
            if(isItPossible(m)){
                s=m;
            }
            else    e=m-eps;
        }
        cout<<fixed<<setprecision(4) <<e<<endl;  
    }

    return 0;
}