#include "binary_trees.h"
/**
 * binary_tree_size - Calcula el tama;o de un arbol binario
 * @tree: puntero al nodo raiz
 * Return: Tama;o del nodo
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
	{
		return (0);
	}

	count = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (count);
}
