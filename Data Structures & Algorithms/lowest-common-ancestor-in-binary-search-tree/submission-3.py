# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def dfs(self,root,p,q):

        if (root.val >= p.val and root.val <=q.val) or (root.val <= p.val and root.val >=q.val )  :
            return root
        if p.val >=root.val and q.val >=root.val:
            return self.dfs(root.right,p,q)
        if p.val <= root.val and q.val <=root.val :
            return self.dfs(root.left,p,q)
    def lowestCommonAncestor(self, root: TreeNode, p: TreeNode, q: TreeNode) -> TreeNode:
        # what does my function returns-> LCA of the given nodes
        # what is my base case -> root.val >=p and root.val <=q or vice versa
        # what do I combine both left and right? -> if p,q>=root.val, move towards right, if p,q<=root.val move towards left

        return self.dfs(root,p,q)
        