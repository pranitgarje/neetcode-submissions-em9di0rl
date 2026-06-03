# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def dfs(self,root):
        if root is None : return 0
        left=self.dfs(root.left)
        right=self.dfs(root.right)
        return max(left,right)+1
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        '''
        what my function returns? -> depth of node
        base case? -> root is null, return 0
        how do I combine left and right? -> max(l,r)+1
        therefore, bottom up dfs -> info pass up to parent  
         '''
        h=self.dfs(root)
        return h

        