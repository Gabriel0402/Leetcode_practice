#include <iostream>

/*
Assume a binary search tree is defined as follows:
the left subtree of a node contains only nodes with keys less than the node's key
the right subtree of a node contains only nodes with keys greater than the node's key
both the left and right subtrees must also be binary search trees
*/
struct TreeNode{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x):val(x),left(NULL),right(NULL){};
};

class Solution{
	public:
	bool isValidBST(TreeNode *root){
		if(!root)
		{
			return true;
		}
		return isValid(root,INT_MIN,INTMAX);
	}
	bool isValid(TreeNode *root,int min,int max)
	{
		if(!root)
		{
			return true;
		}
		if(min<root->val && root->val<max)
		{
			return isValid(root->left,min,root->val) && isValid(root->right,root->val,max);
		}
		else 
		{
			return false;
		}
	}
};

using namespace std;
int main(int argc, char *argv[]) {
	
}