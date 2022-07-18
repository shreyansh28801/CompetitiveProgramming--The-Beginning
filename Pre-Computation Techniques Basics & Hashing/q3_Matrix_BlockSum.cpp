#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> pf;

    int sumRegion(int row1, int col1, int row2, int col2 )
    {
        // int a
        if (col1 == 0 && row1 == 0)
        {
            return pf[row2][col2];
        }
        if (row1 == 0)
        {
            return pf[row2][col2] - pf[row2][col1 - 1];
        }
        if (col1 == 0)
        {
            return pf[row2][col2] - pf[row1 - 1][col2];
        }

        return pf[row2][col2] - pf[row2][col1 - 1] - pf[row1 - 1][col2] + pf[row1 - 1][col1 - 1];
    }
   
    vector<vector<int>> matrixBlockSum(vector<vector<int>> &mat, int k)
    {
        cout << "\nHello1\n";
        pf = mat;
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
        for (int i = 0; i < m; i++)
        {
            /* code */
            for (int j = 0; j < n; j++)
            {
                // pf[i][j] = pf[i - 1][j] + pf[i][j - 1] - pf[i - 1][j - 1] + pf[i][j];
                cout << pf[i][j] << "   ";
            }
            cout << "\n";
        }
        cout << "\nHello2     "  <<m<<"   " << n<<"  " <<"  \n";

        vector<vector<int>> ans;
        for (int i = 0; i < m; i++)
        {
            vector<int> rt;
            for (int j = 0; j < n; j++)
            {
                //  i - k <= r <= i + k,
                // j - k <= c <= j + k, and
                // (r, c) is a valid position in the matrix.
                int r1, c1, r2, c2;
                r1 = i - k;
                r2 = i + k;
                c1 = j - k;
                c2 = j + k;
                if (r1 < 0)
                {
                    r1 = 0;
                }
                if (c1 < 0)
                {
                    c1 = 0;
                }

                if (r2 >= m)
                {
                    r2 = m - 1;
                 
                }
                if (c2 >= n)
                {
                    c2 = n - 1;
                }
                // print();
                cout<<"\nHello3   " << i  <<"  "  <<j<< "   "<< r1<<setw(4)<< c1<< setw(4)<< r2<< setw(4)<< c2<< setw(12)    << sumRegion(r1, c1, r2, c2)<<endl;
                rt.push_back(sumRegion(r1, c1, r2, c2));
            }
            ans.push_back(rt);
        }
        return ans;
    }
};







int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //     [[1,2,3],[4,5,6],[7,8,9]]
    // 1
    vector<vector<int>> vv1{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Solution o1;
    vv1 = o1.matrixBlockSum(vv1, 1);
    cout << "\nhello \n";
    // for (int i = 0; i < vv1.size(); i++)
    // {
    //     for (int j = 0; j < vv1[0].size(); j++)
    //     {
    //         cout << vv1[i][j] << "  ";
    //     }
    //     cout << "\n";
    // }

    return 0;
}