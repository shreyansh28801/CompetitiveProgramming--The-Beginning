#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    cin.ignore();//to ignore new line charcter after t

    while (t--)
    {        
        string s1;
        //Taking i/p as a whole line

        getline(cin,s1); 
        cout<<"\n o/p :  "<<s1;
    }
    
    return 0;
}