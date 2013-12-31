#include <iostream>

using namespace std;

class Solution {
public:
    bool isSameTree(TreeNode *p, TreeNode *q) {
        if(p==NULL || q==NULL) return p==NULL && q==NULL;
        if(p->val==q->val)
        {
            return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
        }
        else 
        {
            return false;
        }
        
    }
};


int main(int argc, char *argv[]) {
	
}