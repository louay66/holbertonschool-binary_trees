#include "binary_trees.h"

/**
 * binary_tree_is_perfect- checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 *
 * Return: 1 if tree is perfect or 0
 * If not or if If tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_balance(tree) == 0 ? 1 : 0);
}

/**
 * binary_tree_balance- measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: measures the balance factor or 0
 * If tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l;
	int height_r;

	if (!tree)
		return (0);
	height_l = tree->left ? (int)binary_tree_height(tree->left) : -1;
	height_r = tree->right ? (int)binary_tree_height(tree->right) : -1;
	return (height_l - height_r);

}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree of data
 *
 * Return: measures the height or 0
 *				If tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (!tree)
		return (0);
	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;


	return (height_l > height_r ? height_l : height_r);

}
