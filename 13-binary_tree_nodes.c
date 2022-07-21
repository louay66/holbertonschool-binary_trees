#include "binary_trees.h"

/**
 * binary_tree_nodes- counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: counts nodes with at least 1of node or 0
 * If tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		count += 1;
	else
		count += 0;
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);
	return (count);
}
