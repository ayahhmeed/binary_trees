#include "binary_trees.h"

/**
 * binary_tree_preorder - check binary tree using pre-order
 * @tree: pointer to the root of the tree
 * @func: pointer to the function to be called
 *
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
