#include "binary_trees.h"

/**
 * custom_height - Func measures the height of a binary tree
 * @tree: Ptr to the root node of the tree to measure the height
 *
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t custom_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);

	/* Recursively measure the height of the left and right subtrees */
	left = custom_height(tree->left);
	right = custom_height(tree->right);

	return ((left > right ? left : right) + 1);
}

/**
 * binary_tree_is_perfect - perfect binary tree checker
 *
 * @tree: Points to root node checker
 *
 * Return: Integer
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lh, rh;

	if (tree == NULL)
		return (0);

	lh = custom_height(tree->left);
	rh = custom_height(tree->right);

	if (lh == rh)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}

	return (0);
}
