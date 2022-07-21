#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree of data
 *
 * Return: measures the height or 0
 * If tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	int height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	int height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (height_l > height_r ? height_l : height_r);

}

