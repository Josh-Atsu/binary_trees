#include "binary_trees.h"

/**
 * binary_tree_depth - determines the delth of a tree
 * @tree: pointer to the node to determine
 * Return: depth position or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dp = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
		dp = 1 + binary_tree_depth(tree->parent);
	return (dp);
}
