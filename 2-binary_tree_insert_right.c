#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: parent node
 * @value: value to be inserted
 * Return: returns a pointer to that node on success or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	right_node = binary_tree_node(parent, value);

	if (right_node == NULL)
	{
		return (NULL);
	}

	right_node->parent = parent;
	right_node->n = value;
	right_node->left = NULL;

	if (parent->right == NULL)
	{
		right_node->right = NULL;
		parent->right = right_node;
	}
	else
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
		parent->right = right_node;
	}
	return (right_node);
}
