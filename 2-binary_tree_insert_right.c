#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts right-child node
 * @parent: Points to right-child node inserter
 * @value: Data to be stored in the struct
 *
 * Return: Points to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rex;

	if (!parent)
		return (NULL);

	/* Malloc the new node */
	rex = malloc(sizeof(binary_tree_t));
	if (!rex)
		return (NULL);

	rex->n = value;
	rex->parent = parent;
	rex->left = NULL;
	rex->right = NULL;

	/* update */
	if (parent->right)
	{
		rex->right = parent->right;
		parent->right->parent = rex;
	}

	parent->right = rex;

	return (rex);
}
