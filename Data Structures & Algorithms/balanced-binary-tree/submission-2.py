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
        if(left==-1 or right==-1) : return -1
        if(abs(left-right)>1) : return -1 
        return max(left,right)+1
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        # do I need info from ancestor -> probably not.
        # do I need info from subtrees -> Yes , therefore bottom up dfs
        # What do my function returns -> true or false
        # base case -> root is none
        # how do I combine left snd right subtrees? -> I should use thier hieghts to check if tree is balanced
        if(self.dfs(root)==-1):return False
        else:return True


