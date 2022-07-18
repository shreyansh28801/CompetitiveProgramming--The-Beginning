#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << "hello World\n";

    // the result of a calculation will be decided by higher data type in expression
    /*
    double>float>l l int>l int>int>char
    */
    cout << "\n"
         << "7/2  is  " << 7 / 2;
    cout << "\n"
         << "7/2.0  is  " << 7 / 2.0;
    cout << "\n"
         << " 'a'+'b'  is  " << 'a' + '1';
    cout << "\n"
         << " 'a'+1  is  " << 'a' + 1;

    //  mul(*) ,div(/), mod(%) having same operator precedence .Hence expression be calculated from L to R
    cout << "\n"
         << "7/2*3    is   " << 7 / 2 * 3;
    cout << "\n"
         << "3*7/2    is   " << 3 * 7 / 2;

    /* appproximate rangeds  of data types
    -10^9<int<10^9
    -10^12<int<10^12
    -10^18<int<10^18
    */

    int a, b;
    a = 100000;                        //10^5
    b = 100000;                        //10^5
    cout << "\n  a*b   is  " << a * b; //not 10^10 bcz here overflow of integer is taking place
    cout << "\n  a*b   is  " << a *1ll* b; // 10^10 bcz here higher data type is LL int and final answer will be calculated in terms of higher data type
    // a=100000000000;//this line shows warning
    // cout <<"\n now my a is "<<a;//not showing 10^11 bcz intreger value can't posses value of power 10 or above
    a = INT_MAX;
    cout << "\n  a+1   is    " << a + 1; //wrong answer bcz overflow
    cout << "\n  a*b   is  " << a * b;   //not 10^10

    //why not using double all time to overcome and overflow???

    double x=100000;
    double y=100000;
    double z=x*y;
    cout<<"\n double z contains  "<<z;
    cout<<"\n double z contains  "<<fixed <<z;//to remove scientific notaion of a number
    cout<<"\n double z contains  "<<fixed <<setprecision(3)<<z;//to remove un necessary precision

    //now come to maain ques wwhty not use double all time

    z=1e24;
    cout<<"\n now  z contains  "<<fixed <<setprecision(6)<<z;//now z does not prints 10^24 but it prints a number close to 10^24. this may cause problen in comptetion. that's why we don't use double until tyhere is need
     double den=7.0,num=22.0;
    z=num/den;
    cout<<endl <<z;


    



    return 0;
}