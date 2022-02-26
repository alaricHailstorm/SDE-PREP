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

void inOrder(TreeNode *root,veci &res); 


vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        inOrder(root,res);
        return res;
    }
    
void inOrder(TreeNode *root, vector<int> &res)
{
    if(root != nullptr)
    {
        inOrder(root->left,res);
        res.push_back(root->val);
        inOrder(root->right,res);
    }
}

void inOrderTraversal(TreeNode* root){
    stack<TreeNode*> recStack;
    vector<int> res;
    TreeNode* cur = root;
    while(cur!=nullptr || !recStack.empty())
    {
        while(cur!=nullptr)
        {
            recStack.push(cur);
            cur=cur->left;
        }
        cur = recStack.top();
        recStack.pop();
        res.push_back(cur->val);
        cur = cur->right;
    }
    
    return res;
}