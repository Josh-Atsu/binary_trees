#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - insert a new node
 * to the right of parent node
 *
 * @parent: pointer to the parent node
 * @value: value to insert into the node
 * Return: pointer to the created node or NUll
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	parent->right = newNode;
	return (newNode);
}
