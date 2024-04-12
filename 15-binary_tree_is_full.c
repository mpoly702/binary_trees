#include "binary_trees.h"

/**
 * binary_tree_is_full - full binary tree checker 
 * @tree: Points to the root node 
 *
 * Return: Integer
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* full tree */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* recursive checker for both subtrees */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
