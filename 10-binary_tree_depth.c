#include "binary_trees.h"
/**
 * binary_tree_depth - measures depth of a node
 * @tree: the tree to be measured
 * Return: returns the depth or 0 if the tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree != NULL && tree->parent != NULL)
	{
		return (1 + binary_tree_depth(tree->parent));
	}
	else
	{
		return (0);
	}
}
