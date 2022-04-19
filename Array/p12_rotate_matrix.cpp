#include<bits/stdc++.h>
using namespace std;

#define foi(i,n) for(int i=0;i<n;i++)
#define foj(j,n) for(int j=0;j<n;j++)
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

void opMatrix(vector< veci> m)
{
    int n = m.size(), x = m[0].size();
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

void solve(vector< veci > &matrix)
{
    int n = matrix.size();
    vector< veci > res(n, veci(n));

    for(int i=0;i<n;i++)
    {
        for(int j=n-1,k=0;j>=0;j--,k++)
        {
            res[i][k]=matrix[j][i];
        }
    }

    opMatrix(res);
}

void solve2(vector< veci > &matrix)
{
    int n = matrix.size();
    
    for(int i=0;i<n/2+n%2;i++)
    {
        for(int j=0;j<n/2;j++)
        {
            int temp = matrix[n-1-j][i];
            matrix[n - 1 - j][i] = matrix[n - 1 - i][n - j - 1];
            matrix[n - 1 - i][n - j - 1] = matrix[j][n - 1 -i];
            matrix[j][n - 1 - i] = matrix[i][j];
            matrix[i][j] = temp;
        }
    }
}

int main()
{
    int n;
    cin>>n;

    vector< veci > v(n, veci (n));
    ipMatrix(v);

    solve2(v);
    opMatrix(v);
}