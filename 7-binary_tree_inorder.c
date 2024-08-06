#include "binary_trees.h"
/**
 * binary_tree_inorder - goes througth a binary tree
 * @tree: is the pointer to the root
 * @func: is the pointer to call each node
 *
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	func(tree->n);
	binary_tree_inorder(tree->left, func);
	binary_tree_inorder(tree->right, func);
}
