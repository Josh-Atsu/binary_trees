#include "binary_trees.h"

/**
 * binary_tree_is_perfect - chexks if ttree is perfect
 * @tree: the pointer to the root node
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height;
	int result;

	if (!tree)
		return (0);
	height = calculate_ref_height(tree);
	result = is_perfect(tree, height, 0);
	return (result);
}

/**
 * calculate_ref_height - calculetes the depth of  tree
 * and make it the reference height
 * @tree: the root node pointer
 * Return: the height
 */
int calculate_ref_height(const binary_tree_t *tree)
{
	int height = 0;

	while (tree != NULL)
	{
		height++;
		tree = tree->left;
	}
	return (height);
}

/**
 * is_perfect - main function to check if tree is perfect
 * @tree: pointer to the root node
 * @height: depth of node
 * @level: current level of node
 * Return: 1 or 0
 */
int is_perfect(const binary_tree_t *tree, int height, int level)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		if (height == level + 1)
			return (1);
	if (!tree->left || !tree->right)
		return (0);

	if (is_perfect(tree->left, height, level + 1) &&
		is_perfect(tree->right, height, level + 1))
		return (1);
	return (0);
}
