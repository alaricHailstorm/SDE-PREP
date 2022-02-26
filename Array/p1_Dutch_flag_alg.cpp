#include<bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)
#define pb push_back


vector<int> bruteForce_sol(vector<int> nums)
{
    int n = nums.size();
    sort(nums.begin(),nums.end());
    return nums;
}

vector<int> hashin_sol(vector<int> num)
{
    int n= num.size();
    int hash_map[3]={0};
    fo(i,n)
    {
        hash_map[num[i]++];
    }
    vector<int> ans;
    for(int i=0;i<3;i++)
    {
        while(hash_map[i]--)
        {
            ans.pb(i);
        }
    }
    return ans;
}

vector<int> solve_optimized(vector<int> num)
{
    int s=0,e=num.size()-1,m = 0;

    while(m<=e)
    {
        if(num[m]==1)
        {
            m++;
        }else if(num[m]==0)
        {
            swap(num[m++],num[s++]);
        }else{
            swap(num[m],num[e--]);
        }
    }
    return num;
}

int main()
{
    int n;
    cin>>n;

    vector<int> v(n);
    fo(i,n){
        cin>>v[i];
    }
    
    vector<int> ans = solve_optimized(v);
    fo(i,n)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}