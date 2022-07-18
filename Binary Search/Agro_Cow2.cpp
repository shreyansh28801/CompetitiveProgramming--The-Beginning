#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long int li;
typedef long double ld;
#define lb lower_bound
#define ub upper_bound
#define pub push_back
#define pob pop_back
typedef long double ld;

/*

Given an array nums which consists of non-negative integers and an integer m, you can split the array into m non-empty continuous subarrays.

Write an algorithm to minimize the largest sum among these m subarrays.


*/

class Solution
{
public:
    bool check(int mid, vector<int> array, int K)
    {
        int n = array.size();
        int count = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {

            if (array[i] > mid)
                return false;

            sum += array[i];

            if (sum > mid)
            {
                count++;
                sum = array[i];
            }
        }
        count++;

        // Check condition
        if (count <= K)
            return true;
        return false;
    }
    int splitArray(vector<int> &array, int m)
    {
        auto max = max_element(array.begin(), array.end());
        int start = *max;
        int end = 0;
        int n = array.size();
        for (int i = 0; i < n; i++)
        {
            end += array[i];
        }

        int answer = 0;
        while (start <= end)
        {
            int mid = (start + end) / 2;

            ;
            if (check(mid, array, m))
            {
                answer = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        return answer;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /*
    const int N_local = 1e5;
    vector<int> v(N_local);
    */

    Solution o;
    int n, m;
    cin >> n >> m;

    vector<int> nu(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nu[i];
    }

    cout << o.splitArray(nu, m);

    return 0;
}