#include<bits/stdc++.h>
using namespace std;

#define foi(i,n) for(int i=0;i<n;i++)
#define foj(j,m) for(int j=0;j<m;j++)
#define it1(i,n) for(int i=1;i<n;i++)
#define rep(i,m) for(int i=0;i<m;i++)
#define ip(n) cin>>n
#define iparr(a) cin>>a[i]
#define matip(v) cin>>v[i][j]
#define oparr(a) cout<<a[i]<<" "
#define veci vector<int>
#define vecc vector<char>
#define ll long long 
#define pb push_back

void solve1(vector<veci> matrix){
    int n = matrix.size(),m = matrix[0].size();
    unordered_map<int,int> hashmapR,hashmapC;
    foi(i,n)
    {
        foj(j,n)
        {
            if(matrix[i][j]==0)
            {
                hashmapR[i]=1;
                hashmapC[j]=1;
            }
        }
    }

    foi(i,n)
    {
        foj(j,n)
        {
            if(hashmapR[i]==1 or hashmapC[j]==1)
            {
                matrix[i][j]=0;
            }
        }
    }
}

void solve2(vector<veci> matrix)
{
    int n = matrix.size(),m = matrix[0].size();
    bool isCol = false;
    foi(i,n)
    {
        if(matrix[i][0]==0)
        {
            isCol = true;
        }
        for(int j=1;j<m;j++)
        {
            if(matrix[i][j]==0)
            {
                matrix[i][0]=0;
                matrix[0][j]=0;
            }
        }
    }

    it1(i,n)
    {
        for(int j=1;j<m;j++)
        {
            if(matrix[i][0]==0 or matrix[0][j]==0)
            {
                matrix[i][j]=0;
            }
        }
    }
    
    if(matrix[0][0]== 0)
    {
        foj(j,m)
        {
            matrix[0][j]=0;
        }
    }
    
    if(isCol)
    {
        foi(i,n)
        {
            matrix[i][0]=0;
        }
    }
}


int main()
{
    int n,m;
    cin>>n>>m;
    vector< veci (m) > v(n);
    fo(i,n)
    {
        fo(j,n){
            matip(v);
        }
    }
    return 0;
}
