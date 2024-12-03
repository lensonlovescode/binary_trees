#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: the parent node
 * @value: the value stored
 * Return: returns a pointer to the node created
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *my_node;

	my_node = malloc(sizeof(binary_tree_t));

	if (my_node == NULL)
	{
		return (NULL);
	}

	if (parent != NULL)
	{
		my_node->parent = parent;
	}
	my_node->left = NULL;
	my_node->right = NULL;
	my_node->n = value;

	return (my_node);
}
