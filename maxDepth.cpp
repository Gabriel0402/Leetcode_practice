#include <iostream>
#include <queue>

using namespace std;

struct TreeNode{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x):val(x),left(NULL),right(NULL){}
};

class Solution {
public:
    int maxDepth(TreeNode *root) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
 		if(NULL==root) return 0;
   		queue<TreeNode *> track;
		queue<int> depth;
		TreeNode *top;
		int max_depth=0;
		track.push(root);
		depth.push(1);
		while (!track.empty()) {
			top=track.front();
			max_depth=depth.front();
			track.pop();
			depth.pop();
			if(NULL!=top->left){
				track.push(top->left);
				depth.push(max_depth+1);
			}
			if(NULL!=top->right){
				track.push(top->right);
				depth.push(max_depth+1);
			}
			
		}
		return max_depth;
    }
};

int main(int argc, char *argv[]) {
	
}