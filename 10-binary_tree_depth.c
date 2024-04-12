#include "binary_trees.h"

/**
 * binary_tree_depth - DEPTH measurer
 * @tree: POINTS to DEPTH measurer
 *
 * Return: INTEGER
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
