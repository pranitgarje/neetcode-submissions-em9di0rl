# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    ans=0
    def dfs(self,root):
        if root is None : return 0
        left=self.dfs(root.left)
        right=self.dfs(root.right)
        self.ans=max(self.ans,left+right)
        return max(left,right)+1
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        # what my function returns -> Height (int val)-> tracked using global variable
        # base condition -> root is null, return 0
        # how I combine left and right ? -> diameter through curr node -> left+right
        # info returned upwards -> bottom up dfs + global variable 
        self.dfs(root)
        return self.ans