#include "binary_trees.h"

/**
 * binary_tree_height - check the height of the tree
 * @tree: pointer to the root
 *
 * Return: the height of the tree or 0 if NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t left_height, right_height;

        if (tree == NULL)
                return (0);

        left_height = binary_tree_height(tree->left);
        right_height = binary_tree_height(tree->right);

        if (left_height > right_height)
                return (left_height + 1);
        else
                return (right_height + 1);
}

/**
 * binary_tree_balance - determine the balance factor for the tree
 * @tree: pointer to the root node
 *
 * Return: balance factor of the root or 0 if the tree NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
