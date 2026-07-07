class Solution(object):
    def rightSideView(self, root):

        if not root:
            return []

        ans = []
        q = [root]

        while q:

            ans.append(q[-1].val)
            temp = []

            for node in q:
                if node.left:
                    temp.append(node.left)
                if node.right:
                    temp.append(node.right)

            q = temp

        return ans
    