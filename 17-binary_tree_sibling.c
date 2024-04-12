#include "binary_trees.h"

/**
 * binary_tree_sibling - sibling finderr 
 *
 * @node: Points to sibling finder
 *
 * Return: Points to the sibling or otherwise its NULL pointer
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->right == node)
		return (node->parent->left);

	return (node->parent->right);
}
