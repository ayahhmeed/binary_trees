#include "binary_trees.h"

/**
 * binary_tree_balance - determine the balance factor for the tree
 * @tree: pointer to the root node
 *
 * Return: balance factor of the root or 0 if the tree NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (free == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
