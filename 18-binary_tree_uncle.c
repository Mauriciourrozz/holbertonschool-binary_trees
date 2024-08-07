#include "binary_trees.h"
/**
 * binary_tree_uncle - it finds the grandparent of a node
 * @node: The node to find the grandparent
 * Return: Is null if the node is null or if the node has no grandparent
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	grandparent = node->parent->parent;

	if (grandparent->left == node->parent)
	{
		return (grandparent->right);
	}
	else
	{
		return (grandparent->left);
	}

}
