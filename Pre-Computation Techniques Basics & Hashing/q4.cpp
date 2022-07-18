#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
long long int Arr[N];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;

    while (m--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        Arr[a] += c;
        Arr[b+1] -= (c);
    }
    for (int i = 1; i <= N; i++)
    {
        /* code */
        Arr[i] += Arr[i - 1];
    }
    
    long long int mx = -1;
    for (int i = 1; i <= N; i++)
    {
       if (mx<Arr[i])
       {
           mx=Arr[i];
       }
       
    }
    cout<<mx;

    return 0;
}