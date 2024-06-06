#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the number of leaves in the tree
 * @tree: pointer to the root node  to count the no. of leaves
 * Return: 0 if NULL or the no. of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		l += binary_tree_leaves(tree->left);
	if (tree->right != NULL)
		l += binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		l += 1;
	return (l);
}
