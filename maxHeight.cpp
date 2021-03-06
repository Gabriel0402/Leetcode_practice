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
    int maxHeight(TreeNode *root)
    {
        if(root==NULL) return 0;
        int left=maxHeight(root->left)+1;
        int right=maxHeight(root->right)+1;
        return left>right?left:right;
    }
    bool isBalanced(TreeNode *root) {
        if(root==NULL) return true;
        while(root!=NULL)
        {
            int left=maxHeight(root->left);
            int right=maxHeight(root->right);
            if(abs(left-right)>=2) return false;
            else return isBalanced(root->left) && isBalanced(root->right);
        }
        
        
    }
};

int main(int argc, char *argv[]) {
	
}