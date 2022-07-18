#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int> &nums)
{
    int sz = nums.size();
    int subset_ct = (1 << sz);
    vector<vector<int>> vv1;
    for (int i = 0; i < subset_ct; i++)
    {
        vector<int> v;
        for (int j = 0; j < sz; j++)
        {
            if (i & (1 << j) != 0)
            {
                v.push_back(nums[j]);
            }
        }
        vv1.push_back(v);
    }
    return vv1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<INT_MIN;

    return 0;
}