#include <iostream>

using namespace std;

struct TreeNode{
	int val;
	TreeNode *left;
	TreeNdoe *right;
	TreeNode(x):val(x),left(NULL),right(NULL){}
};

class Solution {
public:
    bool isSymmetric(TreeNode *root) {
		if(root==NULL) return true;
		return checkSymmetric(root->left, root->right);
   }
   bool checkSymmetric(TreeNode *left, TreeNode *right)
   {
	   if(left==NULL && right==NULL) return true;
	   else if (left==NULL || right==NULL) {
		return false;
		
	  }
	  if(left->val!=right->val) return false;
	return (checkSymmetric(left->left,right->right)&&checkSymmetric(left->right,right->left));
   }
};

int main(int argc, char *argv[]) {
	
}