#include <bits/stdc++.h>
using namespace std;

string isBalanced(string s)
{
    stack<char> st;
    bool ans = true;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
                return "NO";

            if (c == ')' && st.top() == '(')
            {
                st.pop();
            }
            else if (c == '}' && st.top() == '{')
            {
                st.pop();
            }
            else if (c == ']' && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                return "NO";
            }
        }
    }
    if (!st.empty())
        return "NO";
    else
        return "YES";
}

vector<int> nge(vector<int> &v)
{
    vector<int> v1(v.size());
    stack<int> st;
    for (int i = 0; i < v.size(); i++)
    {
        while (!st.empty() && st.top() < v[i])
        {
            /* code */
            v1[st.top()] = v[i];
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        v1[st.top()]=-1;
        st.pop();
    }
    return v1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}