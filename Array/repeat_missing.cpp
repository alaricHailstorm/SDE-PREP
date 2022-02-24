#include<bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)
#define it1(i,n) for(int i=1;i<n;i++)
#define pb push_back

vector<int> solve(vector<int> nums)
{
    int n= nums.size();
    int xor_val = nums[0];
    it1(i,n)
    {
        xor_val = xor_val ^ nums[i];
    }
    fo(i,n)
    {
        xor_val = xor_val ^ (i+1);
    }

    int x=0,y=0,set_bit = xor_val & ~(xor_val-1);

    fo(i,n)
    {
        if(nums[i] & set_bit)
        {
            x = x ^ nums[i];
        }else{
            y = y ^ nums[i];
        }
    }

    fo(i,n)
    {
        if((i+1)&set_bit)
        {
            x = x ^ (i+1);
        }else{
            y = y ^ (i+1);
        }
    }
    cout<<x<<" "<<y<<endl;
    vector<int> ans({x,y});
    return ans;
}

int main()
{
    int n;
    cin>>n;

    vector<int> v(n);
    fo(i,n) cin>>v[i];

    vector<int> ans = solve(v);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}