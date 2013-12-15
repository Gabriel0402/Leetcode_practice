/* Write your custom functions here */

int max(int a,int b)
{
    if(a>b) return a;
    else return b;
}

int height(node * node)
{
    if(node==NULL)
    {
        return 0;
    }
    return 1+max(height(node->left),height(node->right));
}
        
int diameterOfTree(node * root) {
/* For your reference
  struct node {
   struct node *left,*right;
   int val;
};
*/
   if(root==NULL)
   {
       return 0;
   }
   int lheight=height(root->left);
   int rheight=height(root->right);
   int ldiameter=diameterOfTree(root->left);
   int rdiameter=diameterOfTree(root->right);
   return max(lheight+rheight+1,max(ldiameter,rdiameter));
}