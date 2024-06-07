#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a given node
 * @node: the pointer to the node to find the sibling
 * Return: the pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (!node->parent->parent->left || !node->parent->parent->right)
		return (NULL);
	if (node->parent->parent->left->n == node->parent->n)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
