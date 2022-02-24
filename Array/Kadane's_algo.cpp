#include<bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)
#define it1(i,n) for(int i=1;i<n;i++)
#define rep(i,m) for(int i=0;i<m;i++)
#define veci vector<int>
#define vecc vector<char>
#define ll long long 
#define pb push_back

ll max_sum(veci nums)
{
    int n =nums.size();
    ll max_so_far = INT_MIN, max_sum = 0;
    fo(i,n)
    {
        max_sum += nums[i];
        max_so_far = max(max_sum,max_so_far);
        if(max_sum < 0 )
        {
            max_sum = 0;
        }
    }
    return max_so_far;
}

int main()
{
    int n;
    cin>>n;
    veci a(n+1);
    fo(i,n) cin>>a[i];

    cout<<max_sum(a)<<endl;
    return 0;
}