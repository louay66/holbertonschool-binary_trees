#include "binary_trees.h"

/**
 * binary_tree_sibling- finds the sibling of a node
 * @node: is a pointer to the node to find the sibling
 *
 * Return: sibling of a node or NULL
 * If not has  siblingor if If tree is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
