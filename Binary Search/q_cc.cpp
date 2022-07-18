#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int A[N];
int n,h;

bool PredicateFunc(int m){
    int hours_ct=0;
    for (int i = 0; i < n; i++)
    {
        hours_ct+=(A[i]/m);
        if (A[i]%m >0)
        {
            hours_ct++;
        }
        
    }
    return hours_ct<=h;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>h;
        for (int i = 0; i < n; i++)
        {
            cin>>A[i];
        }
        auto mx=max_element(A,A+n);
        int s=1,e=*mx,m;
        
        while (e-s>1)
        {
            m=(s+e)/2;
            if(PredicateFunc(m)){
                e=m;
            }
            else    s=m+1;
        }
        if(PredicateFunc(s))    cout<<s<<endl;
        else    cout<<e<<endl;
        
        
    }
    
    return 0;
}