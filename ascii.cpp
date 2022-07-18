#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, i;

    cout << "\nenter 1 for viewing ascii values\n";
    cin >> a;
    cout << "\n";
    switch (a)
    {
    case 1:

        for (i = 0; i <= 255; i++)
        {
            printf("The ASCII value   of %c is = %d\n", i, i);
        }
        cout << "\n enter 0 to stop \n";
        cin >> a;
        break;

    default:
        break;
    }
    return 0;
}