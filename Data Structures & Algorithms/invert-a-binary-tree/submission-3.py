from queue import Queue
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
  


    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if not root: return None
        q=Queue()
        q.put(root)
        while not q.empty():
            curr=q.get()
            temp=curr.left
            curr.left=curr.right
            curr.right=temp;
            if curr.left is not None : q.put(curr.left)
            if curr.right is not None:q.put(curr.right)
        
        return root;

        