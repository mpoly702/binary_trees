#include "binary_trees.h"

/**
 * binary_tree_is_root - root checker
 * @node: node pointer
 *
 * Return: 1 or 0 (integers)
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	/* orphan node */
	if (!node->parent)
		return (1);
	return (0);
}
