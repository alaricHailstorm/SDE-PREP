#include<bit/stdc++.h>
using namespace std;

vector< vector<int>> graph(100005, vector<int>);
bool vis[100005]={0};

void clear(int n)
{
    for(int i=1;i<=n;i++)
    {
        vis[i]=0;
        graph[i].clear();
    }
}
void dfs(int n)
{
    vis[n] = true;

    for(int i : graph[n])
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }
}

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int cc =0 ;
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            dfs(i);
            cc++;
        }
    }
    return 0;
}