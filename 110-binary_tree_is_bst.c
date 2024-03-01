#include "binary_trees.h"

/**
 * binary_tree_is_bst_checker - checkes to
 * determine if the binay tree is a valid BTS
 * @tree: pointer to the root
 * @min: minimum value for the current node
 * @max: maximum value for the curent node
 *
 * Return: 1 if binary tree is a BST , 0 if it's not
 */

int binary_tree_is_bst_checker(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return ((binary_tree_is_bst(&(tree->left), min, tree->n - 1)) &&
			(binary_tree_is_bst(&(tree->right, tree->n + 1, max)));
}

/**
 * binary_tree_is_bst - to see if the binary tree is a valid binary search
 * @tree : pointer to the root
 *
 * Return: 1 if it's valid binary BST , 0  if it's not
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_is_bst_checker(tree, INT_MIN, INT_MAX));
}
