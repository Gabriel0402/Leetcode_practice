#include <iostream>

using namespace std;


class Solution {
public:
    void connect(TreeLinkNode *root) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
 			if(root==NULL) return;
			if(root->left!=NULL)
			{
				TreeLinkNode *l=root->left;
				TreeLinkNode *r=root->right;
				while(l!=NULL)
				{
					l->next=r;
				   l=l->right;
					r=r->left;
				}
				
			}
			connect(root->left);
			connect(root->right);
    }
};


int main(int argc, char *argv[]) {
	
}