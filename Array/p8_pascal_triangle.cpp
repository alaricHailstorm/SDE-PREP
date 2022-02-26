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

vector<veci> bruteforce(int n)
{
    int n = numRows;
    vector< veci > v(n,veci (n));
    foi(i,n)
    {
        for(int j=0;j<=i;j++)
        {
            int c = 0;
            if(j==0 or j==i)
            {
                c = 1;
            }
            else
            {
                c = res[i-1][j-1] + res[i-1][j];
            }
            res[i].pb(c);
        }
    }
    return res;
}

vector< veci> solution1(int numRows)
{
    int n = numRows;
    vector< veci > v(n);
    for(int i=1;i<=n;i++)
    {
        int next = 1;
        for(int j=1;j<=i;j++)
        {
            res[i-1].pb(next);
            next = next  * (i-j)/j;
        }
    }
    return res;
}

int main()
{
    return 0;
}