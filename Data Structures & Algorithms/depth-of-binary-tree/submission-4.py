from queue import Queue
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    

    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if root is None:return 0;
        st=[]
        st.append([root,1])
        maxDepth=0
        while len(st)>0:
            curr,depth=st[-1]
            st.pop()
            maxDepth=max(maxDepth,depth)
            if curr.left is not None:st.append([curr.left,depth+1])
            if curr.right is not None:st.append([curr.right,depth+1])
        
        return maxDepth
        

        
        