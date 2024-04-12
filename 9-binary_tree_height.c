#include "binary_trees.h"

/**
 * binary_tree_height - measurer of height
 * @tree: root node pointer
 *
 * Return: integer
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hl, hr;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	/* Recursive measurer of subtree height */
	hl = binary_tree_height(tree->left);
	hr = binary_tree_height(tree->right);

	return ((hl > hr ? hl : hr) + 1);
}
