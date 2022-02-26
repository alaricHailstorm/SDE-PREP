#include<bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)
#define it1(i,n) for(int i=1;i<n;i++)
#define rep(i,m) for(int i=0;i<m;i++)
#define veci vector<int>
#define vecc vector<char>
#define ll long long 
#define pb push_back

vector< veci > solve( vector< veci > intervals)
{
    vector< veci > ans;
    sort(intervals.begin(),intervals.end());
    int i=0,n = intervals.size();
    while(i<n)
    {
        int k=i+1;

        int sc=intervals[i][1];
        while(k<n and intervals[k][0]<=sc)
        {
            sc = max(intervals[k][1],sc);
            k++;
        }
        ans.pb({intervals[i][0],sc});
        i=k;
    }
    return ans;
} 

int main(){
    int n,x,y;

    vector< veci > v(n);
    fo(i,n)
    {
        cin>>x>>y;
        v[i].pb({x,y});
    }
    return 0;
}