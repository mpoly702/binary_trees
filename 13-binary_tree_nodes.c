#include "binary_trees.h"

/**
 * binary_tree_nodes - Counter of nodes with @ least one child
 * @tree: Points  to counter of nodes
 *
 * Return: integer
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* node shuld have at least 1 child */
	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	return (0);
}
