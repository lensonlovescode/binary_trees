#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: the tree to measure
 * Return: returns the balance factor or 0 If tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = 0;

	if (tree->left)
	{
		left_height = 1 + binary_tree_balance(tree->left);
	}

	right_height = 0;

	if (tree->right)
	{
		right_height = 1 + binary_tree_balance(tree->right);
	}

	return (left_height - right_height);
}
