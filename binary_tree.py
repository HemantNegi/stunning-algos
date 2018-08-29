#!/usr/bin/python
# 
# Program implementing a binary tree.


class Node:
    """
    Represents a binary tree node
    """

    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

    def __repr__(self):
        return "<Node: %s>" % self.data


class BinaryTree:
    """
    Represents a binary tree
    """
    def __init__(self):
        self.root = None

    def insert(self, data):
        """
        inserts a new node in the tree
        """
        node = Node(data)
        if self.root is None:
            self.root = node
        else:
            self.__insert(self.root, node)


    def remove(self, data):
        """
        remvoes the given node from tree if found
        """
        pass

    def find(self, data):
        """
        searches the given node in tree
        """
        return self.__find(self.root, data)


    def print_inorder(self):
        """
        Prints the tree in in-order fashion
        """
        self.__print_inorder(self.root)


    def print_preorder(self):
        """
        Prints the tree in pre-order fashion
        """
        self.__print_preorder(self.root)

    def print_postorder(self):
        """
        Prints the tree in post-order fashion
        """
        self.__print_postorder(self.root)



    #### private methods ####
    def __insert(self, root, node):
        if node.data <= root.data:
            if root.left is None:
                root.left = node
            else:
                self.__insert(root.left, node)
        else:
            if root.right is None:
                root.right = node
            else:
                self.__insert(root.right, node)

    def __find(self, root, data):
        if not root:
            return None

        if root.data == data:
            return root

        if data < root.data:
            return self.__find(root.left, data)
        else:
            return self.__find(root.right, data)

    def __print_inorder(self, node):
        if node is not None:
            self.__print_inorder(node.left)
            print node.data    
            self.__print_inorder(node.right)

    def __print_preorder(self, node):
        if node is not None:
            print node.data    
            self.__print_preorder(node.left)
            self.__print_preorder(node.right)

    def __print_postorder(self, node):
        if node is not None:
            self.__print_postorder(node.left)
            self.__print_postorder(node.right)
            print node.data    



if __name__ == "__main__":
    print "Starting programs"

    bt = BinaryTree()
    bt.insert(5)
    bt.insert(3)
    bt.insert(4)
    bt.insert(7)
    bt.insert(9)
    bt.insert(6)
    bt.insert(2)

    print "search 9: ", bt.find(9)

    print "Inorder traversal: "
    bt.print_inorder()

        bt.remove(5)

    print "Postorder traversal"
    bt.print_postorder()
