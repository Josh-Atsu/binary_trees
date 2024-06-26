#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - check if node is leaf
 *
 * @node: pointer to the node to check
 *
 * Return: 1 on success, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
