#include "binary_trees.h"

/**
 * binary_tree_node - creates binary tree
 * @parent: is pointer to parent node
 * @value: where to put new node
 * Return: failure - NULL
 *         else return pointer to node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
