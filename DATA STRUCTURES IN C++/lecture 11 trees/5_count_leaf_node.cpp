
int getLeafNodeCount(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL)
        return 0;
    if(root->children.size()==0)
        return 1;
    int smallAns=0;
    for(int i=0;i<root->children.size();i++){
        smallAns+=getLeafNodeCount(root->children[i]);
    }
    return smallAns;
}