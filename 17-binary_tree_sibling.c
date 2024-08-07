#include "binary_trees.h"
/**
 * binary_tree_sibling - it finds the sibling of a node
 *
 * @node: a pointer to the node to find the silbing
 *
 * Return: NULL if the node is NULL or parent is NULL or node has no silbing
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
	{
		return (node->parent->right);
	}

	if (node == node->parent->right)
	{
		return (node->parent->left);
	}

	if (!node->parent->left && !node->parent->right)
	{
		return (NULL);
	}
	return (0);
}
