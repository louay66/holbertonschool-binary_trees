#include "binary_trees.h"

/**
 * binary_tree_size - measures the  of size a binary tree
 * @tree: tree of data
 *
 * Return: measures the size or 0
 * If tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size(tree->right) + binary_tree_size(tree->left) + 1);
}
