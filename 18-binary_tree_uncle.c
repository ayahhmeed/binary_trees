#include "binary_trees.h"

/**
 * binary_tree_uncle: - finds the uncle of a node
 * @node: A pointer to the node to find the sibling.
 *
 * Return: the uncle if exists.
 */
binary_tree_node_t *binary_tree_uncle(binary_tree_node_t *node) {
    if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
        return NULL;

    binary_tree_node_t *parent = node->parent;
    binary_tree_node_t *grandparent = parent->parent;

    if (grandparent->left == parent) {
        return grandparent->right;
    } else {
        return grandparent->left;
    }
}
