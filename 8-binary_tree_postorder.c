#include "binary_trees.h"

/**
 * binary_tree_postorder - post-order traverser of binary tree
 * @tree: root node pointer
 * @func: function call pointer
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;

	if (!func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
