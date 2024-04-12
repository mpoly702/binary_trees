#include "binary_trees.h"

/**
 * binary_trees_ancestor - lowest common ancestor finder
 * @first: Points  node first
 * @second: Points to  node second
 *
 * Return: lowest common ancestor,or NULL (Integers)
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *as, *af = first;

	if (!first || !second)
		return (NULL);

	/* Traversal up */
	while (af)
	{
		as = second;

		while (as)
		{
			/* common ancestor finder */
			if (af == as)
				return ((binary_tree_t *)af);

			/* Moving to  second/first ancestor */
			as = as->parent;
		}

		af = af->parent;
	}

	return (NULL);
}
