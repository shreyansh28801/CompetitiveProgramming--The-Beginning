#include <bits/stdc++.h>
using namespace std;

class NumMatrix
{
public:
    vector<vector<int>> pf;
    NumMatrix(vector<vector<int>> &matrix)
    {

        pf = matrix;
    }

    int sumRegion(int row1, int col1, int row2, int col2)
    {
        int m = pf.size();
        int n = pf[0].size();
        for (int i = 1; i < n; i++)
        {
            pf[0][i] += pf[0][i - 1];
        }
        for (int i = 1; i < m; i++)
        {
            pf[i][0] += pf[i - 1][0];
        }

        for (int i = 1; i < m; i++)
        {
            /* code */
            for (int j = 1; j < n; j++)
            {
                pf[i][j] = pf[i - 1][j] + pf[i][j - 1] - pf[i - 1][j - 1] + pf[i][j];
            }
        }

        return pf[row2][col2] - pf[row2][col1 - 1] - pf[row1 - 1][col2] + pf[row1 - 1][col1 - 1];
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>> vv1{{3, 0, 1, 4, 2}, {5, 6, 3, 2, 1}, {1, 2, 0, 1, 5}, {4, 1, 0, 1, 7}, {1, 0, 3, 0, 5}};
    NumMatrix *o1 = new NumMatrix(vv1);
    cout << "   \n"
         << o1->sumRegion(2, 1, 4, 3);
    cout << "   \n\n\n\n\n"
         << o1->sumRegion(1, 1, 2, 2);
    cout << "   \n\n\n\n\n"
         << o1->sumRegion(1, 2, 2, 4);

    return 0;
}