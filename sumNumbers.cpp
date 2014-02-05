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
    int sumNumbers(TreeNode *root) {
        if(root==NULL) return 0;
        return sumUntil(root,0);
        
    }
    int sumUntil(TreeNode *cur,int sum)
    {
        int result=0;
        sum=sum*10+cur->val;
        if(cur->left==NULL && cur->right==NULL)
        {
            result=sum;
        }
        else{
            if(cur->left!=NULL)
            {
                result+=sumUntil(cur->left,sum);
            }
            if(cur->right!=NULL)
            {
                result+=sumUntil(cur->right,sum);
            }
        }
        return result;
    }
};

int main(int argc, char *argv[]) {
	
}