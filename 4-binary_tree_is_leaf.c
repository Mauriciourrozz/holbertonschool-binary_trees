#include "binary_trees.h"
/**
 * binary_tree_is_leaf - comprueba si un nodo es un leaf
 * @node: es comprobado si es leaf
 * Return: 1 si es leaf, 0 si no.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
