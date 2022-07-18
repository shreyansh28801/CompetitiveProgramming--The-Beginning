#include <bits/stdc++.h>
using namespace std;

vector<int> nge(vector<int> &v)
{
    vector<int> v1(v.size());
    stack<int> st;
    for (int i = 0; i < v.size(); i++)
    {
        while (!st.empty() && v[st.top()] < v[i])
        {
            /* code */
            v1[st.top()] = v[i];
            // cout<<st.top()<<"   "<<v[i]<<endl;
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
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    vector<int> v1=nge(v);
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" "<<v1[i]<<"\n";
    }
    

     
    return 0;
}