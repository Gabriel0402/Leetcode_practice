#include <iostream>

using namespace std;

struct TreeNode{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(x):val(x),left(NULL),right(NULL){}
};


class Solution {
public:
    TreeNode *sortedArrayToBST(vector<int> &num) {
		
      return *sortedArrayToBSTtemp(num,0, num.size()-1);
    }
    TreeNode *sortedArrayToBSTtemp(vector<int> &num, int start, int end)
	{
		if(start>end) return NULL;
		int mid=(start+end)/2;
		TreeNode *node=new TreeNode(num[mid]);
		node->left=sortedArrayToBSTtemp(num,start,mid-1);
		node->right=sortedArrayToBSTtemp(num,mid+1,end);
		return node;
	}	

};


int main(int argc, char *argv[]) {
	
}