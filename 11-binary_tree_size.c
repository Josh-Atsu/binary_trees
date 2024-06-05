#include "binary_trees.h"

/**
 * binary_tree_size - determines the size of the tree
 * @tree: pointer tothe current node to determine its subnodes
 * Return: the number of nodes or size, otherwise 0 if NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (size + 1);
}
