#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a binary tree node in right of node
 * @parent: pointer to the parent node of the node to inserted
 * @value: value to put in the new node
 *
 * Return: Pointer to the newly inserted node
 *         NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = parent->right;
	new->left = NULL;
	parent->right = new;

	if (new->right)
		new->right->parent = new;
	return (new);
}
