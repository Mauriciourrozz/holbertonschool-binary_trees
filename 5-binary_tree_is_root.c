#include "binary_trees.h"
/**
 * binary_tree_is_root - comprueba si un nodo es un root
 * @node: es comprobado si es root
 * Return: 1 if root, 0 si no.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
