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

void helper(TreeNode *root,veci &res); 

vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        helper(root, res);
        return res;
        
    }
    
void helper(TreeNode *root, vector<int> &res)
{
    if(root != nullptr)
    {
        res.push_back(root->val);
        helper(root->left,res);
        helper(root->right,res);
    }
}


veci preOrderTraversal(TreeNode *root)
{
    vector<int> res;
    stack<TreeNode *> q;
    
    if(root == nullptr)
        return res;
    
    q.push(root);
    while(!q.empty())
    {
        TreeNode* cur = q.top();
        q.pop();
        
        res.push_back(cur->val);
        
        if(cur->right!=nullptr)
        {
            q.push(cur->right);
        }
        if(cur->left!=nullptr)
        {
            q.push(cur->left);
        }
    }
    return res;
        
}

veci preOrderMoris(TreeNode * root)
{
    vector<int> res;
    TreeNode* cur = root;
    while(cur!=nullptr)
    {
        if(cur->left == nullptr)
        {
            res.push_back(cur->val);
            cur = cur->right;
        }else
        {
            TreeNode * prev = cur->left;
            while(prev->right!= nullptr and prev->right!=cur)
            {
                prev = prev->right;
            }
            
            if(prev->right == nullptr)
            {
                prev->right = cur;
                res.push_back(cur->val);
                cur=cur->left;
            }else
            {
                prev->right = nullptr;
                cur=cur->right;
            }
        }
    }
    
    return res;
}