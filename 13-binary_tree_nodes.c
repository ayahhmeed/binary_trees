#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to the root.
 *
 * Return: nodes number.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t treenode = 0;

	if (tree)
	{
		treenode += (tree->left || tree->right) ? 1 : 0;
		treenode += binary_tree_nodes(tree->left);
		treenode += binary_tree_nodes(tree->right);
	}
	return (treenode);
}
