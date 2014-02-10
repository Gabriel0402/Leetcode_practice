#include <iostream>

using namespace std;

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode *root, int sum) {
        if(root==NULL) return false;
        int sumpath=0;
        return hasPathSum_help(root,sum,sumpath);
        
    }
    bool hasPathSum_help(TreeNode *root, int sum, int sumpath)
    {
        sumpath+=root->val;
        if(root->left==NULL && root->right==NULL)
        {
            if(sumpath==sum) return true;
            else return false;
        }
        bool returncode= false;
        if(root->left!=NULL)
        {
            returncode=hasPathSum_help(root->left,sum,sumpath);
            if(returncode==true) return true;
        }
        if(root->right!=NULL)
        {
            returncode=hasPathSum_help(root->right,sum,sumpath);
            if(returncode==true) return true;
        }
        return false;
    }
};

int main(int argc, char *argv[]) {
	
}