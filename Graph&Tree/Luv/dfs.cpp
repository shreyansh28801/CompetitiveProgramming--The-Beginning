#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10; // maximum possible vertices in grapfh

vector<int> g[N]; //adjacency list

bool visited[N]; //it will tell that a particular node is visited or not

void dfs(int vertex)
//here vertex tells about where we are starting to visit in graph
{
    visited[vertex] = true;
    for (int child : g[vertex])
    {
        //before entering calling dfs for child we ahve to check it using visited vector
        if (visited[child])
            continue;

        dfs(child);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int v, e; //n is no. of vertices and m is no of edges
    cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    int count = 0; //count for connected component in graph
    for (int i = 1; i <=v; i++)
    {
        /* code */
        if(visited[i])  continue;
        dfs(i);
        count++;
    }
    cout<<"count is  "<<count<<"\n";
    return 0;
}