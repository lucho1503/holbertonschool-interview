#include "binary_trees.h"

/**
 * binary_tree_node - create a new binary tree node.
 * @parent: is a pointer to parent node of the node create.
 * @value: values to insert in the binary tree new node.
 * Return: the new node or NULL if fail.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
