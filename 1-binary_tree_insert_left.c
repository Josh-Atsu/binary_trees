#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - insert a new node
 * to the left of the parent tree
 *
 * @parent: pointer to the parent tree
 * @value: the value to put at the node
 * Return: the created node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return NULL;

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return NULL;

	if (parent->left == NULL)
	{
		newNode->n = value;
		newNode->parent = parent->left;
		newNode->left = NULL;
		newNode->right = NULL;
	}
	else
	{
		newNode->n = value;
		newNode->left = parent->left;
		newNode-parent = parent;
		newNode->right = NULL;
	}
	return newNode;
}
