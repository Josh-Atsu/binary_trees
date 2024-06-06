#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * the balance factor is the difference between the
 * height of the left tree and the right tree
 * @tree: pointer to the root node
 * Return: results or 0 if NULL
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t h1 = 0;
	size_t h2 = 0;
	int b;

	if (!tree)
		return (0);

	if (tree->left != NULL)
		h1 = 1 + binary_tree_height_new(tree->left);
	if (tree->right != NULL)
		h2 = 1 + binary_tree_height_new(tree->right);
	b = h1 - h2;
	return (b);
}

/**
 * binary_tree_height_new - measures the height of a tree
 *
 * @tree: pointer to the root node of the tree
 * Return: the height or 0 if tree is NULL
 */
size_t binary_tree_height_new(const binary_tree_t *tree)
{
	size_t h1 = 0;
	size_t h2 = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		h1 = 1 + binary_tree_height_new(tree->left);
	if (tree->right != NULL)
		h2 = 1 + binary_tree_height_new(tree->right);
	if (h2 > h1)
		return (h2);
	return (h1);
}
