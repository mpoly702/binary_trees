#include "binary_trees.h"

/**
 * binary_tree_leaves - counter of leaves in a binary tree
 * @tree: Points to leaf counter 
 *
 * Return: Integer
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* leaf node checker */
	if (!tree->left)
		return (1);

	if (!tree->right)
		return (1);

	/* Counter of leaves  */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
