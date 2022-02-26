#include<bits/stdc++.h>
using namespace std;

#define foi(i,n) for(int i=0;i<n;i++)
#define foj(j,m) for(int j=0;j<m;j++)
#define rei(i,n) for(int i=1;i<n;i++)
#define rej(j,m) for(int j=1;j<m;j++)
#define ip(n) cin>>n
#define iparr(a) cin>>a[i]
#define matip(v) cin>>v[i][j]
#define oparr(a) cout<<a[i]<<" "
#define veci vector<int>
#define vecc vector<char>
#define ll long long 
#define pb push_back

int solveMat(vector< veci > &matrix);

void opMatrix(vector< veci> m)
{
    int n = m.size(),x = m[0].size();
    foi(i,n)
    {
        foj(j,x)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}

void ipMatrix(vector< veci > &mt)
{
    int n = mt.size(), m=mt[0].size();
    foi(i,n)
    {
        foj(j,m)
        {
            cin>>mt[i][j];
        }
    }
}

void ipArr( veci & a)
{
    int n = a.size();
    foi(i,n)
        cin>>a[i];
}

int main()
{
    int n,m;
    cin>>n>>m;

    vector< veci >  v (n,veci(m));

    ipMatrix(v);
    return 0;
}

bool solveMat(vector< veci > &matrix, int target){
   int n = matrix.size(), m = matrix[0].size();

    int i =0;
    while(i<n and matrix[i][m-1]< target)
    {
        i++;
    }
    if(i==n)
        return 0;

    for(int j=0;j<m;j++)
    {
        if(matrix[i][j]==target)
            return 1;
    }
    return 0;
}

bool solveBS(vector< veci > &matrix, int target)
{
    int n = matrix.size(), m = matrix[0].size();
    int s = 0, e = m*n-1;

    while(s<=e)
    {
        int mid = s + (e-s)/2;
        int i = mid/m, j = mid%2;

        if(matrix[i][j])
    }
}