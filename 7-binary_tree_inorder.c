#include "binary_trees.h"
/**
 * binary_tree_inorder - Traverses a binary tree in inorder
 * @tree: the tree to be traversed
 * @func: the function to be applied to element n when traversing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
