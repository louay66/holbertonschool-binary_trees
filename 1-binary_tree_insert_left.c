#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a binary tree node in left of node
 * @parent: pointer to the parent node of the node to inserted
 * @value: value to put in the new node
 *
 * Return: Pointer to the newly inserted node
 *         NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = parent->left;
	parent->left = new;

	if (new->left)
		new->left->parent = new;
	return (new);
}
