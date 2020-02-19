int maxDepth(Node* root) {
        
        if(root==NULL)
        {
            return 0;
        }
        int depth=1;
        for(int i=0;i<root->children.size();i++)
        {
            depth=max(maxDepth(root->children[i])+1,depth);
        }
        return depth;
        
    }
