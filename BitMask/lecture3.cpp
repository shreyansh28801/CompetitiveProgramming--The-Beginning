#include <bits/stdc++.h>
using namespace std;

//set , ubset, toggle  , count bits


//In an n bit number 
//0th bit => lsb
//nth bit => msb

/*

In a binary no. ith bit is set if ith bit  is 1 .
In a binary no. ith bit is unset if ith bit  is 0 .
Example - in binary representation of  5 =>  101  => 0th bit is set and 1st bit is unset and 2nd bit is set

*/

/*
How to check ith bit is set or not???
*/

bool isIthBitSet(int num , int i)
//Given a number num return true if its ith bit is set else false
{
    if (0==((1<<i)&num))
    {
        // cout<<"\n ith bit was unset";
        return false;
    }
    else
    {
        // cout<<"\n ith bit was set";
        return true;
    }
    
    
}


void printBinaryNumber(int num){
    cout<<endl;
    for (int i = 31; i >=0; i--)
    {
        cout<<((num>>i)&1);
    }
    cout<<endl;
    
}

void setIthBitOfNumber(int &num,int i){
    cout<< "\nbefore seting   "<<i<<"  th   bit of number  " ;
    printBinaryNumber(num);
    num=num|(1<<i);
    cout<< "\nafter seting   "<<i<<"  th   bit of number  " ;
    printBinaryNumber(num);

}


void unSetIthBitOfNumber(int &num,int i){
    cout<< "\nbefore unseting   "<<i<<"  th   bit of number  " ;
    printBinaryNumber(num);
    num=num&(~(1<<i));
    cout<< "\nafter unseting   "<<i<<"  th   bit of number  " ; 
    printBinaryNumber(num);

}


void toggleIthBitOfNumber(int &num,int i){
    cout<< "\nbefore toggling   "<<i<<"  th   bit of number  " ;
    printBinaryNumber(num);
    num=num^(1<<i);
    cout<< "\nafter toggling   "<<i<<"  th   bit of number  " ; 
    printBinaryNumber(num);

}

int bitCount(int num){
    int ct=0;
    cout<<"\nbinary representation of num is  ";  
    printBinaryNumber(num);
    for (int i = 0; i < 32; i++)
    {
        if (isIthBitSet(num,i))
        {
            ct++;
        }
            
    }
    return ct;
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    printBinaryNumber(9);
    isIthBitSet(9,3);
    cout<<"   <------- 3rd bit of 9 is ??";
    isIthBitSet(9,2);
    cout<<"   <------- 2nd bit of 9 is ??";
    isIthBitSet(9,1);
    cout<<"   <------- 1st bit of 9 is ??";
    isIthBitSet(9,0);
    cout<<"   <------- 0th bit of 9 is ??";

    printBinaryNumber(1ll<<31);
    for (int i = 0; i < 32; i++)
    {
         isIthBitSet((1ll<<31)-1,i);
        cout<<"   "<<i;
        
    }

    cout<<"\n\n\n";
    int a=9;
    setIthBitOfNumber(a,1);
    cout<<"\n\n\n";
     a=9;
    unSetIthBitOfNumber(a,3);
    cout<<"\n\n\n";
     a=9;
    toggleIthBitOfNumber(a,3);
    cout<<"\n\n\n";
     a=9;
    toggleIthBitOfNumber(a,5);
    cout<<"\n\n\n";
     a=(1ll<<31)-1;
   cout<<"bit count in "<<a<<"   "<< bitCount(a);
   cout<<"  \n\n\n inbuilt function  to bitcount  "<<__builtin_popcount((1ll<<31));
   cout<<"  \n\n\n inbuilt function  to bitcount  "<<__builtin_popcount((1ll<<31)-1);//for integers
   cout<<"  \n\n\n inbuilt function  to bitcount  "<<__builtin_popcountll((1ll<<36)-1);//for long long integers
    
    
    return 0;
}