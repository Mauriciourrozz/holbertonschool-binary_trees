#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserta un nodo como  hijo izquierdo de otro nodo
 * @parent: puntero al nodo para insertar el nodo
 * @value: Valor a almacenar el nuevo nodo
 * Return: Valor del nuevonodo
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		free(parent);
		return (NULL);
	}


	if (parent == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	if (parent->left != NULL)
	{
		parent->left->parent = new_node;
		new_node->left = parent->left;
	}
	parent->left = new_node;

	return (new_node);
}
