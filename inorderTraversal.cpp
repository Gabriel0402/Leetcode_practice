#include <iostream>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x):val(x),left(NULL),right(NULL){}
};

class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) {
			vector<int> result;
			stack<TreeNode*> stack_tree;
			while(root||!stack_tree.empty())
			{
				if(root->left)
				{
					stack_tree.push(root);
					root=root->left;
				}
				else
				{
					result.push_back(root->val);
					root=root->right;
					while(!root && !stack_tree.empty())
					{
						root=stack_tree.top();
						result.push_back(root->val);
						stack_tree.pop();
						root=root->right;
					}
				}
			}
			return result;
    }
};
int main(int argc, char *argv[]) {
	
}