class TreeNode:
    def __init__(self, data):
        self.val = data
        self.left = None
        self.right = None

def inorder(node):
    if node is None:
        return
    inorder(node.left)
    print(node.val,end=" ")
    inorder(node.right)


def isUnival(node):
    vals = []

    def dfs(node):
        if node:
            vals.append(node.val)
            dfs(node.left)
            dfs(node.right)

    dfs(node)
    return len(set(vals)) == 1


def count_unival(root):
    if root is None:
        return 0
    left = count_unival(root.left)
    right = count_unival(root.right)

    return 1 + left + right if isUnival(root) else left + right


root = TreeNode(0)
node1 = root.left = TreeNode(1)
node2 = root.right = TreeNode(0)
node2.left = TreeNode(1)
node2.right = TreeNode(0)
node2.left.left = TreeNode(1)
node2.left.right = TreeNode(1)

print(count_unival(root))

print(inorder(root))
