#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a tree
 *
 * @tree: pointer to the root node of the tree
 * Return: the height or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h1 = 0;
	size_t h2 = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		h1 = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		h2 = 1 + binary_tree_height(tree->right);
	if (h2 > h1)
		return (h2);
	return (h1);
}
