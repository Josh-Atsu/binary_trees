#include "binary_trees.h"

/**
 * binary_tree_ancestor - finds the common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: the common ancestor or NULL
 */
binary_tree_t *binary_trees_ancestor(
		const binary_tree_t *first, const binary_tree_t *second)
{
	int first_d, second_d;

	if (!first || !second)
		return (NULL);
	/* count the nodes levels */
	first_d = calculate_depth(first);
	second_d = calculate_depth(second);

	/* Scale them up to the same level */
	while (first_d > second_d)
	{
		first = first->parent;
		first_d--;
	}
	while (second_d > first_d)
	{
		second = second->parent;
		second_d--;
	}

	while (second && first && second != first)
	{
		first = first->parent;
		second = second->parent;
	}
	return (first == second ? (binary_tree_t *)first : NULL);
}

/**
 * calculate_depth - count the depth of a node up to the root node
 * @node: pointer to the node
 * Return: the depth level ofthe node
 */
int calculate_depth(const binary_tree_t *node)
{
	int depth = 0;

	if (!node)
		return (0);
	while (node)
	{
		depth++;
		node = node->parent;
	}
	return (depth);
}
