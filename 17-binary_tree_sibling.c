#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the siblin of a particular node
 * @node: pointer to the node to find it's sibling
 * Return: the sibling of the node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);
	if (node->parent->left->n == node->n)
		return (node->parent->right);
	return (node->parent->left);
}
