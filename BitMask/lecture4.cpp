#include <bits/stdc++.h>
using namespace std;
//avoid modulo 2 instead of it use bitwise-and 1 (&1)
//instead of dividing by 2 use right shift operation
//instead of multiplying by 2 use left shift operation

//Check Pairty
void checkPairty(int num)
{
    if (num & 1)
    {
        cout << "\nnum   " << num << "   is odd";
    }
    else
    {
        cout << "\nnum   " << num << "   is  even";
    }
}

void printBinaryNumber(int num)
{
    cout << endl;
    for (int i = 31; i >= 0; i--)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

//lower to uppercase -- unset 5th bit of lower case character to convert it into upper case chracter
char lowerToUpper(char c)
{
    char ans = c & (~(1 << 5));
    return ans;
}

//upper to lowercase --set 5th bit of upper case character to convert it into lower case chracter
char UpperToLower(char c)
{
    char ans = c | ((1 << 5));
    return ans;
}

void clearLsb(int n1, int i)
{

    printBinaryNumber(n1);
    n1 = n1 & (~((1 << (i + 1)) - 1));
    printBinaryNumber(n1);
}

void clearMsb(int n1, int i)
{

    printBinaryNumber(n1);
    n1 = n1 & (((1 << (i + 1)) - 1));
    printBinaryNumber(n1);
}

//is number a power of 2
bool isNumberPowerOf2(int num)
{
    if (0==num)
    {
        cout<<"\n we can' decide in case of zero \n";
    }
    
    return !(num & (num - 1));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 0; i < 10; i++)
    {
        checkPairty(i * 7);
    }
    cout << "\n binary representation of uper case letter of  asccii values  :  \n";
    for (int i = 'A'; i <= 'Z'; i++)
    {
        cout << (char)i;
        printBinaryNumber(i);
    }
    for (int i = 'a'; i <= 'z'; i++)
    {
        cout << (char)i;
        printBinaryNumber(i);
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        cout << i;
        printBinaryNumber(i);
        char temp = lowerToUpper(i);
        cout << temp;
        printBinaryNumber(temp);
    }

    cout << "\n\nupper to lower  \n ";
    for (char i = 'A'; i <= 'Z'; i++)
    {
        cout << i;
        printBinaryNumber(i);
        char temp = UpperToLower(i);
        cout << temp;
        printBinaryNumber(temp);
    }

    //clear lsb's in one operation (not using for loop and unseting the bit in one 1 iteration of loop)
    //Example -  clearing lsb till 4 th bit of number 59

    int n1 = 59;

    cout << "\n clearing lsb's till 4th bit (0 to 4th bit\n\n";
    clearLsb(n1, 4);
    cout << "\n clearing msb's till 4th bit (0 to 4th bit\n\n";
    clearMsb(n1, 1);

    for (int i = 0; i < 10; i++)
    {
        if (isNumberPowerOf2(1 << i))
        {
            cout << "   " << (1 << i) << "  is power of 2\n";
        }
        else
        {
            cout << "   " << (1 << i) << "  is not power of 2\n";
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (isNumberPowerOf2((1 << i)-1))
        {
            cout << "   " << ((1 << i)-1) << "  is power of 2\n";
        }
        else
        {
            cout << "   " << ((1 << i)-1) << "  is not power of 2\n";
        }
    }

    return 0;
}