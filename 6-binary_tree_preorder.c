#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree via pre-order traversal
 * @tree: Ptr to the root node of the tree to traverse
 * @func: Ptr to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;

	if (!func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
