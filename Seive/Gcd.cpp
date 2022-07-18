#include <bits/stdc++.h>
using namespace std;


int gcdUsingEuclidAlgo(int a,int b){
    if (0==a)
    {
        return b;
    }
    
    return gcdUsingEuclidAlgo(b%a,a);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout<<"\n"<<gcdUsingEuclidAlgo(12,18);
    cout<<"\n"<<gcdUsingEuclidAlgo(18,12);
    cout<<"\n"<<gcdUsingEuclidAlgo(4,12);
    cout<<"\n"<<gcdUsingEuclidAlgo(12,4);
    cout<<"\nlcm of a , b "<<(12*18)/gcdUsingEuclidAlgo(12,18);
    cout<<"\nlcm of a , b "<<(12*18)/gcdUsingEuclidAlgo(18,12);
    cout<<"\nlcm of a , b "<<(12*4)/gcdUsingEuclidAlgo(4,12);
    cout<<"\nlcm of a , b "<<(12*4)/gcdUsingEuclidAlgo(12,4);


    //Builtin function of gcd

    cout<<"\ngcd  of 12 , 18 is  "<<__gcd(12,18);
    cout<<"\nlcm  of 12 , 18 is  "<<(12*18)/__gcd(12,18);
    
    return 0;
}
