#include "binary_trees.h"
/**
 * binary_tree_depth - mide la profundidad de un nodo
 * @tree: Puntero al nodo para medir profundidad
 * Return: La profundidad del arbol
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
