#include "binary_trees.h"

/**
<<<<<<< HEAD
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
=======
 * binary_tree_balance - measures the balance factor
 * @tree: A pointer to the root.
 *
 * Return: balance factor.
 */
int binary_tree_balance(const binary_tree_node_t *tree) {
    if (tree == NULL)
        return 0;

    int left_height = tree_height(tree->left);
    int right_height = tree_height(tree->right);

    return left_height - right_height;
>>>>>>> ed28d9de01cfb6c6ef61547a7823469f513b0983
}
