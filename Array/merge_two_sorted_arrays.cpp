#include<bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)
#define it1(i,n) for(int i=1;i<n;i++)
#define rep(i,m) for(int i=0;i<m;i++)
#define veci vector<int>
#define vecc vector<char>
#define pb push_back

// Have to return the same array.

void solve(vector<int> *nums1,int m, vector<int> nums2,int n){
    int s1 = m-1, s2 = n-1;

    for(int p = m+n-1; p>=0;p--)
    {
        if(s2<0)
            break;

        if(s1>=0 and nums1[s1]>nums2[s2])
        {
            nums1[p]=nums1[s1--];
        }else{
            nums1[p]=nums2[s2--];
        }
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    veci v1(n+m),v2(m);
    fo(i,n) cin>>v1[i];
    rep(i,m) cin>>v2[i];

    solve(&v1,&v2);
}