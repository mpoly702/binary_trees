#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert left-child to parent node
 * @parent: Points to node for left-child insertion
 * @value: new node data
 *
 * Return: Points to the latest node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *data;

	if (!parent)
		return (NULL);

	/* malloc for data(new node) */
	data = malloc(sizeof(binary_tree_t));
	if (!data)
		return (NULL);

	data->n = value;
	data->parent = parent;
	data->left = NULL;
	data->right = NULL;

	/* update */
	if (parent->left)
	{
		data->left = parent->left;
		parent->left->parent = data;
	}

	parent->left = data;

	return (data);
}