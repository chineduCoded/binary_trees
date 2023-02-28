#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node as left-child
 * @parent: a pointer to the node to insert in the left-child
 * @value: value to store in the new node
 * Return: created node, or NULL on failure of if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_-tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
