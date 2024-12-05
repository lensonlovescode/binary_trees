#include "binary_trees.h"
/**
 * binary_tree_preorder - Traverses a binary tree in preorder
 * @tree: the tree to be traversed
 * @func: the function to be applied to element n when traversing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
