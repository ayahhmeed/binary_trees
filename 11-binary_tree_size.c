#include "binary_trees.h"

/**
 * binary_tree_size - determine the size of the tree
 * @tree: a pointer to the root
 *
 * Return: the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t siz = 0;

	if (tree)
	{
		siz += 1;
		siz += binary_tree_size(tree->left);
		siz += binary_tree_size(tree->right);
	}
	return (siz);
}
