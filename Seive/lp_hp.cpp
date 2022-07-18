#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;

vector<bool> isPrime(N, 1);
vector<int> hp(N, 0); //hp[i]  denotes the highest prime factor of number i
vector<int> lp(N, 0); //lp[i]  denotes the lowest prime factor of number i

void seiveAlgo()
//T . C.  =>  O(N*log(log(N)))
{
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i < N; i++)
    {
        if (isPrime[i] == true)
        {
            hp[i] = lp[i] = i;
            for (int j = 2 * i; j < N; j += i)
            {
                isPrime[j] = false;
                hp[j] = i;
                if (lp[j] == 0)
                {
                    lp[j] = i;
                }
            }
        }
    }
}


vector<int> primeFactorizationBestOptimized(int n,map<int,int> &prime_factr)
//T. C. => O(log(n))
{
    vector<int> r;
    while (n > 1)
    {
        int i = hp[n]; // one may use lp[n] also here .
        while ((n % i) == 0)
        { 
            n /= i;
            r.push_back(i);
            prime_factr[i]++;
        }
    }

    return r;
}
int arr[9];




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    seiveAlgo();

    // for (int i = 0; i < 50; i++)
    // {
    //     cout << i << setw(5) << isPrime[i] << setw(5) << lp[i] << setw(5) << hp[i] << "\n";
    // }

   
    map<int,int> prime_factr;
    int a=499*199;
    vector<int> v=primeFactorizationBestOptimized(24,prime_factr);
    for (auto i :v)
    {
        cout<<"   "<<i;
    }
    cout<<"\n\n\n";
    for (auto i :prime_factr)
    {
        
        cout<<"   "<<i.first<<"     "<<i.second<<"\n";
    }
    map<int,int> prime_factr1;
    int b=463*293*359;
    vector<int> v1=primeFactorizationBestOptimized(9990,prime_factr1);
    for (auto i :v1)
    {
        cout<<"   "<<i;
    }
    cout<<"\n\n\n";
    for (auto i :prime_factr1)
    {
        
        cout<<"   "<<i.first<<"     "<<i.second<<"\n";
    }

    
    



//    /*
//    Ques given q queries .  in each query a number(N) is given. print sum and count of all divisors of given number in each query.
//    q,N<=10^6
//    */


//     //  T.C. =>  N*lg(lg(n))  +  q*lg(n)  =>

//     int q;
//     cin>>q;
//     while (q--)
//     {
//         int n;
//         cin>>n;
//         map<int,int> prime_factr;
//         vector<int> v=primeFactorizationBestOptimized(n,prime_factr);
//         for(auto i : v){
//             cout<<i<<"    ";
//         }
//         cout<<"\n";
//         int count=1;
//         int sum=1;
//         for (auto i : prime_factr)
//         {            
//             count *= (i.second+1);
//             sum *=  ((pow(i.first,i.second+1)-1)/(i.first-1));
//         }

//         cout<<count<<"      "<<sum<<"\n";
        
    // }
    
    








    


//     return 0;
// }