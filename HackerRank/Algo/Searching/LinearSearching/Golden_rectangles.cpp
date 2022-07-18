#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int ct=0;
    while (t--)
    {
        double w,h;
        cin>>w>>h;

        double r=w>h?w/h:h/w;
        // cout<<"  "<<r;
        if (r>=1.6  &&  r<=1.7)
        {
            ct++;
        }
        


    }
    cout<<ct;
    
    return 0;
}