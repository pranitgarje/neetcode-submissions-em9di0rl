# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right


class Solution:
    def dfs(self,root):
        if root is None:return
        temp=root.left
        root.left=root.right
        root.right=temp
        self.dfs(root.left)
        self.dfs(root.right)
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        # top down dfs-> passing info down to chilren
        # root.left and root.right are the states that will be updated in each step and pass down
        # my function returns-> nothing!
        # my base case is ? -> root is null
        # How do I combine left and right? -> I swap them with each other
        self.dfs(root)
        return root
        