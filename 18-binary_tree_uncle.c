#include "binary_trees.h"
/**
* binary_tree_uncle - finds the uncle of a node
* @node: the node whose uncle is to be found
* Return: a pointer to the uncle of the given node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	return (binary_tree_sibling(node->parent));
}

/**
* binary_tree_sibling - finds the sibling of a node
* @node: the node looking for its sibling
* Return: pointer to the node of the other sibling
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->right == node)
	{
		return (node->parent->left);
	}
	else
	{
		return (node->parent->right);
	}
}
