
int sumOfNodes(TreeNode<int>* root) {
       int sum=0;
    queue<TreeNode<int>*> pn;
    pn.push(root);
    
    while(pn.size()!=0)
    {
        TreeNode<int>* front=pn.front();
        pn.pop();
        sum=sum+front->data;
            
        for(int i=0;i<front->children.size();i++)
        {
            pn.push(front->children[i]);
        }
    }
    return sum;
}