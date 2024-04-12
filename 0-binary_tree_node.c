#include "binary_trees.h"

/**
 * binary_tree_node - this function manufs the node of a binary tree
 * @parent: points to the parent of the node to be created
 * @value: Data to be found in the newly created node
 *
 * Return: Pointer to new node, or nothing if failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* memory allocation  for the new_node(newly created node) */
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	/* new_node(new node) initialization */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
