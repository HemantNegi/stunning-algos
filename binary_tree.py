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

	def print_inorder(self):
		"""
		Prints the tree in in-order fashion
		"""
		self.__print_inorder(self.root)



	####  private methods ####
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

	def __print_inorder(self, node):
		if node is not None:
			self.__print_inorder(node.left)
			print node.data	
			self.__print_inorder(node.right)



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

	bt.print_inorder()
