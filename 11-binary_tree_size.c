#include <stddef.h>

/* Definition for binary tree node */
typedef struct binary_tree_s {
    int n;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/* Function to measure the size of a binary tree */
size_t binary_tree_size(const binary_tree_t *tree) {
    if (tree == NULL) {
        return 0;
    }
    /* Calculate the size as the sum of sizes of left and right subtrees, plus 1 for the current node */
    return 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
}
