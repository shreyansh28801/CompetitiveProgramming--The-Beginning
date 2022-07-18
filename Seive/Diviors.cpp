#include <bits/stdc++.h>
using namespace std;

//naive approach to find divisors
void printAllDivisors(int n)
//Time Complexity - O(n)
{
    int s = 0;  //sum of divisors
    int ct = 0; //counts of divisors
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
            ct++;
            s += i;
        }
    }

    cout << ct << "   " << s << endl;
}

//little bit optimize approach to find divisors
void printAllDivisorsinLittleOptimizedWay(int n)
//Time Complexity - O(sqrt(n))
{
    int s = 0;  //sum of divisors
    int ct = 0; //counts of divisors
    int i;
    for (i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << "    " << (n / i) << endl;
            ct += 2;
            s += i;
            s += (n / i);
        }
    }

    if (i * i == n)
    {
        cout << i << endl;
        ct++;
        s += i;
    }

    cout << ct << "   " << s << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    printAllDivisors(n);
    cout<<"\n\nlittle optimized version \n\n";
    printAllDivisorsinLittleOptimizedWay(n);

    return 0;
}