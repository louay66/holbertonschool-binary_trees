#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if node is leaf or not.
 * @node: node from tree
 *
 * Return:  1 if node is a leaf, otherwise 0
 * If node is NULL, return 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->right || node->left)
		return (0);
	return (1);
}
