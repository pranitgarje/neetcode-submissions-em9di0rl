# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    ans=float('-inf')
    def dfs(self,root):
        if root is None : return 0
        left=self.dfs(root.left)
        right=self.dfs(root.right)
        self.ans=max(self.ans,max(0,left)+max(0,right)+root.val)
        return max(0,max(left,right))+root.val
    def maxPathSum(self, root: Optional[TreeNode]) -> int:
        self.dfs(root)
        return self.ans
        