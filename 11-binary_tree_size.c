#include "binary_trees.h"

/**
 * binary_tree_size - size measurer
 * @tree: Points to measurer of size
 *
 * Return: Integer
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* size of subtree */
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
