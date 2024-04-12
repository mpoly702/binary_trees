#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checker ==> is this node a leaf?
 * @node: Points to checker node
 *
 * Return: 0 (integer)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	/* leaf checker */
	if (!node->left && !node->right)
		return (1);
	return (0);
}
