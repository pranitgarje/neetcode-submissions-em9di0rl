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
        q=deque()
        q.append(root)
        res=0
        while q:
            for i in range(len(q)):
                node=q.popleft()
                if node.left is not None:q.append(node.left)
                if node.right is not None:q.append(node.right)
            res+=1
        
        return res
        

        
        