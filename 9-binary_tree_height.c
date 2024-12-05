#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: the tree to be measured
 * Return: returns the height or if thr tree is NULL 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = 0;
	right_height = 0;

	if (tree->left != NULL)
	{
		left_height = 1 + binary_tree_height(tree->left);
	}
	if (tree->right != NULL)
	{
		right_height = 1 + binary_tree_height(tree->right);
	}

	return ((left_height > right_height) ? left_height : right_height);
}
