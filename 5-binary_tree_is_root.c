#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_root - checks if node is root
 * @node: pointer to the node to check
 * Return: 1 on success, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
