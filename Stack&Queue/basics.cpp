#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    stack<int> st;
    st.push(12);
    st.push(32);
    st.push(788);
    st.push(89);
    st.push(109);
    while (!st.empty())
    {
        cout<<st.top()<<"\n";
        st.pop();
    }
    // cout<<"now top is   " << st.top();
    queue<string> q;
    q.push("abc")   ;
    q.push("abc2")   ;
    q.push("abc1")   ;
     while (!q.empty())
    {
        cout<<q.back() <<"  "<<q.front()  <<"\n";
        q.pop();
    }

    return 0;
}