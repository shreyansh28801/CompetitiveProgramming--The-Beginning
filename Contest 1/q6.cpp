#include <bits/stdc++.h>
using namespace std;

 vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> vv1;
        
        vector<int> v1;
        v1.push_back(1);
        vv1.push_back(v1);
        for(int i=1;i<numRows;i++){
             vector<int> v2;
             for(int j=0;j<i+1;j++){
                 if(j==0||j==i) v2.push_back(1);
                 else   v2.push_back(vv1[i-1][j-1]+vv1[i-1][j]);
            
            }
            vv1.push_back(v2);
        }
        return vv1;
        
    }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> v=generate(n);
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = 0; j < v[i].size(); j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<"\n";
        }
        
    }

    return 0;
}