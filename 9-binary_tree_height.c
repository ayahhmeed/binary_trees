#include "binary_trees.h"

/**
 * binary_tree_height - check the height of the tree
 * @tree: pointer to the root
 *
 * Return: the height of the tree or 0 if NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height, left_height;

	if (tree == NULL)
		return (0);

	right_height = binary_tree_height(tree->right);
	left_height = binary_tree_height(tree->left);

	if (right_height > left_height)
		return (right_height + 1);
	else
		return (left_height + 1);
}
