if(root==NULL)
        {
            return 0;
        }
        else
        {
           int lDepth=maxDepth(root->left);
            int rDepth=maxDepth(root->right);
            
            if(lDepth>rDepth)
            {
                return lDepth+1;
            }
            else
            {
                return rDepth+1;
            }
        }
        
    }
