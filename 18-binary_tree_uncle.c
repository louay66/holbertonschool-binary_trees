#include "binary_trees.h"

/**
 * binary_tree_uncle-  finds the uncle of a node
 * @node: is a pointer to the node to find the uncle
 *
 * Return: uncle of a node or NULL
 * If not has  uncle if If tree is NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

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
