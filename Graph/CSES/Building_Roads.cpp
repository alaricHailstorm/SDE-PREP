/**
 * @file Building_Roads.cpp
 * @author Aditya Narayan
 * @brief Find the problem at this link "https://cses.fi/problemset/task/1666"
 * @version 0.1
 * @date 2022-07-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;

int parent[1000005]={0};
int rnk[1000005]={0};

void makeset(int n)
{
    for(int i =1;i<=n;i++)
    {
        parent[i]=i;
        rnk[i]= 0;
    }
}

int find(int u)
{
    if(u == parent[u])
        return u;

    return parent[u] = find(parent[u]);
}


void merge(int a, int b)
{
    a = find(a);
    b = find(b);

    if(a != b)
    {
        if(rnk[a] < rnk[b])
            swap(a,b);

        parent[b] = a;
        rnk[a]+=1;
    }
}

int main()
{
    int n,m;
    cin>>n>>m;

    makeset(n);

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
    int x = *(s.begin());
    for(auto i = s.begin(); i != s.end(); i++)
    {	
    	if(i == s.begin())
    		continue;
    		
        cout<<x<<" "<<*i<<endl;
    }
    return 0;
}