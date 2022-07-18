#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a=(1ll<<32)-1;//-1
    cout<<a<<endl;

     a=(1ll<<31)-1;//INT_MAX
    cout<<a<<endl;

    cout<<INT_MAX<<endl;

    for (int i = 0; i < 33; i++)
    {
        a=(1ll<<i);//INT_MAX
        cout<<a<<"    ";
        a=(1ll<<i)-1;//INT_MAX
        cout<<a<<endl;
        
    }
    



    return 0;
}