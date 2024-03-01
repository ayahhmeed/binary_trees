#include "binary_trees.h"

/**
 * binary_tree_size - determine the size of the tree
 * @tree: a pointer to the root
 *
 * Return: the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t si = 0;

	if (tree)
	{
		si += 1;
		si += binary_tree_size(tree->left);
		si += binary_tree_size(tree->right);
	}
	return (si);
}
