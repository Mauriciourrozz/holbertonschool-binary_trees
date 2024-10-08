#include "binary_trees.h"
/**
 *  binary_tree_leaves - calcula cuantas hojas hay en el arbol
 *  @tree: Puntero al nodo raiz
 *  Return: 0 si es null y sino la cantidad de hojas
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));

}
