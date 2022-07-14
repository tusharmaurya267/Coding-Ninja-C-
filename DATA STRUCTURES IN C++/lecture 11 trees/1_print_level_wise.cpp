void printLevelWise(TreeNode<int>* root) {
    queue<TreeNode<int>*> pending;
    pending.push(root);
    while(pending.size()!=0){
        cout<<pending.front()->data<<":";
        for(int i=0;i<pending.front()->children.size();i++){
            cout<<pending.front()->children[i]->data;
            pending.push(pending.front()->children[i]);
            if(i<pending.front()->children.size()-1){
                cout<<",";
            }
        }
        cout<<endl;
        pending.pop();
    }
}