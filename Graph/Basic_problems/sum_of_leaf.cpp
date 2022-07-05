#include<bits/stdc++.h>
using namespace std;

#define mx 1000005

bool vis[mx] ={0};

int dfs(vector< vector<int>> &g,int s)
{
    vis[s] = true;

    if(g[s].size() == 0)
        return s;

    int total = 0;

    for(int u : g[s])
    {
        total+= dfs(g,u);
    }
    return total;
}

int main(){
    int n,m;
    cin>>n>>m;
	vector< vector<int>> g(n+1, vector<int> ());
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;

        g[u].push_back(v);
    }

    cout<<dfs(g,1)<<endl;
    return 0;
}