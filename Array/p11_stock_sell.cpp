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

ll maxProfit(veci prices)
{
    int n = prices.size();
    ll min_point = INT_MAX, maxProf = 0;
    for(int i=0;i<n;i++)
    {
        if(min_point > prices[i])
        {
            min_point = prices[i];
        }else if(prices[i]-min_point > maxProf)
        {
            maxProf = prices[i]-min_point;
        }
    }
    return maxProf;
}

int main()
{
    int n;
    cin>>n;

    veci v(n);

    foi(i,n)
    {
        cin>>v[i];
    }

    int ans = maxProfit(v);
}