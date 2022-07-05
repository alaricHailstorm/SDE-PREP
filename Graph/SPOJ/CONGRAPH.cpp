#include<bit/stdc++.h>
using namespace std;

vector< vector<int>> graph(100005, vector<int>);
bool vis[100005]={0};

int parent[100005]={0};
int rank[100005] ={0};

int find(int u)
{
    if(u == parent[u])
        return u;

    return parent[u] = find(parent[u]);
}

void megre(int a, int b)
{
    a = find(a);
    b = find(b);

    if(a != b)
    {
        if(rank[a] < rank[b])
        {
            swap(a,b);
        }
        parent[b] = a;
        rank[a]+=1;
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

        merge(u,v);
    }
    set<int> s;
    for(int i=1;i<=n;i++)
    {
        s.insert(find(i));
    }

    cout<<s.size() - 1<<endl;
    return 0;
}