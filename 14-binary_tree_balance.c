#include "binary_trees.h"

/**
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
}
