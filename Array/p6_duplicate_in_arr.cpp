#include<bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)
#define it1(i,n) for(int i=1;i<n;i++)
#define rep(i,m) for(int i=0;i<m;i++)
#define ip(n) cin>>n
#define iparr(a) cin>>a[i]
#define oparr(a) cout<<a[i]<<" "
#define veci vector<int>
#define vecc vector<char>
#define ll long long 
#define pb push_back

//Floyd's Cycle detection algorithm.

int solve(veci nums)
{
    int n = nums.size();
    int f = nums[0], s = nums[0];
    do
    {
        s=nums[s-1];
        f=nums[nums[f]-1];
    }while(f!=s and f<n)

    s=nums[0];
    while(f!=s)
    {
        s = nums[s-1];
        f = nums[f-1];
    }
    return f;
}

int main()
{
    int n;
    ip(n);

    veci a(n);
    fo(i,n) iparr(a);

    fo(i,n)
    {
        oparr(a);
    }
    return 
}