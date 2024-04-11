#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts node as the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node,or NULL on failure/if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *data;

	if (!parent)
		return (NULL);

	/* Allocate memory for the data(new node) */
	data = malloc(sizeof(binary_tree_t));
	if (!data)
		return (NULL);

	data->n = value;
	data->parent = parent;
	data->left = NULL;
	data->right = NULL;

	/* If parent already has a left child, update */
	if (parent->left)
	{
		data->left = parent->left;
		parent->left->parent = data;
	}

	parent->left = data;

	return (data);
}