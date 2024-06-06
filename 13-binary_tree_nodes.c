#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with
 * at least 1 child in a binary tree
 * @tree: pointer to the root node
 * Return: the number of nodes present or 0 if NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		n += 1;
	if (tree->left != NULL)
		n += binary_tree_nodes(tree->left);
	if (tree->right != NULL)
		n += binary_tree_nodes(tree->right);
	return (n);
}
