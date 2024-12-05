#include "binary_trees.h"
/**
 * binary_tree_size - counts how many nodes are in the tree
 * @tree: the root node
 * Return: the number of nodes in the tree or o if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_height - calculates the height of the tree
 * @tree: the root node
 * Return: returns the height or 0 if the tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	left_height = 0;
	right_height = 0;

	if (!tree)
	{
		return (0);
	}

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_is_perfect - checks if the tree is perfect
 * @tree: the root node
 * Return: returns 1 if the tree is perfect or 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;
	size_t expected_size;

	height = 0;
	expected_size = 0;

	if (tree == NULL)
	{
		return (0);
	}

	height = binary_tree_height(tree);

	expected_size = (1 << (height + 1)) - 1;

	if (expected_size == binary_tree_size(tree))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

