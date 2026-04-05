# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def dfs(self,root):
        if root is None:return 0
        left=1+self.dfs(root.left)
        right=1+self.dfs(root.right)
        return max(left,right)

    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if root is None:return 0;
        return self.dfs(root)
        