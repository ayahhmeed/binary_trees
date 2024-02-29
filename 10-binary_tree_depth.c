#include "binary_trees.h"

/**
 * binary_tree_depth - determine the depth of the node
 * @tree: a pointer to the root
 *
 * Return: the depth of thenode or 0 if the tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
