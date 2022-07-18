#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;


vector<vector<int>> divisors(N);

void divisorBestMethod()
// T. C. =>  O(nlog(n))
{
    for (int i = 2; i < N; i++)
    {
        for (int j = i; j < N; j+=i)
        {
            divisors[j].push_back(i);
        }
        
    }
    
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    divisorBestMethod();
    for (int i = 0; i < 500; i++)
    {
        cout<<i<<"       ";
        for (int div : divisors[i])
        {
            cout<<div<<"    ";
        }
        cout<<endl;
        
    }
    
    
    return 0;
}