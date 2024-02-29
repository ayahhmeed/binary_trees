#include "binary_trees.h"

/**
 * binary_tree_is_leaf - to check if the a node is leaf
 * @node: pointer to the node
 *
 * Return: 1 if the node is leaf  , 0 if not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return (!node->left && !node->right);
}
