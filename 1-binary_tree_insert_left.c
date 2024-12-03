#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parent node
 * @value: value to be inserted
 * Return: returns a pointer to that node on success or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	left_node = binary_tree_node(parent, value);

	if (left_node == NULL)
	{
		return (NULL);
	}

	left_node->parent = parent;
	left_node->n = value;
	left_node->right = NULL;

	if (parent->left == NULL)
	{
		left_node->left = NULL;
		parent->left = left_node;
	}
	else
	{
		left_node->left = parent->left;
		parent->left->parent = left_node;
		parent->left = left_node;
	}
	return (left_node);

}
