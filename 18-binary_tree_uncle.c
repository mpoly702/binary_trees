#include "binary_trees.h"

/**
 * binary_tree_uncle - node uncle finder 
 *
 * @node: Points to node uncle finder
 *
 * Return: Integer
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	/* grandparent node checker */
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);

	if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);

	return (NULL);
}
