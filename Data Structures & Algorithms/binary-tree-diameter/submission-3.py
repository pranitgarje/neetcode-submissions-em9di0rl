# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    maxHeight=0
    def get_height(self,root):
        if root is None:return 0
        return max(self.get_height(root.left),self.get_height(root.right))+1;
    def dfs(self,root,maxHeight):
         if root is None:return 
         left=self.get_height(root.left)
         right=self.get_height(root.right)
         self.maxHeight=max(maxHeight,left+right)
         self.dfs(root.left,self.maxHeight)
         self.dfs(root.right,self.maxHeight)

        


    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        if root is None:return 0
        self.dfs(root,self.maxHeight)
        return self.maxHeight



        