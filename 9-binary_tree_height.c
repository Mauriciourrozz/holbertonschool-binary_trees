#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_height - Mide la altura de un arbol
 * @tree: puntero a la raiz
 * Return: 0 si es null sino la altura
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count = 0;
	size_t count2 = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		count = 1 + binary_tree_height(tree->left);
	else
		count = 0;
	if (tree->right)
		count2 = 1 + binary_tree_height(tree->right);
	else
		count2 = 0;

	if (count > count2)
		return (count);
	return (count2);
}
