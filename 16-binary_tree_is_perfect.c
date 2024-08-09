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
		return (-1);

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
/**
 * binary_tree_balance - measure the balance factor of a binary tree
 *
 * @tree: pointer to the root node
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
/**
 * binary_tree_is_perfect - it checks if the tree is full or not
 * @tree: pointer into the nude
 *
 * Return: 0 if tree is null or 1 if the tree is full
 *
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int t;
	int p = 1;

	if (tree == NULL)
		return (0);
	t = binary_tree_size(tree) + 1;
	while (p < t)
		p *= 2;
	if (p != t)
		return (0);
	if (binary_tree_balance(tree) != 0)
		return (0);
	return (1);

}
