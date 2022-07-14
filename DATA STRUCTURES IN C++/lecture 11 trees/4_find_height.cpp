
int getHeight(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL)
        return 0;
    int max = 0;
    for(int i=0;i<root->children.size();i++){
        int temp = getHeight(root->children[i]);
        if(temp>max)
            max=temp;
    }
    return max+1;
}