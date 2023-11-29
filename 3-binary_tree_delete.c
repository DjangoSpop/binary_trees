#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"



void binary_tree_delete(binary_tree_t *tree) {
    // Base case: if tree is NULL, do nothing
    if (tree == NULL) {
        return;
    }

    // Recursively delete the left subtree
    binary_tree_delete(tree->left);

    // Recursively delete the right subtree
    binary_tree_delete(tree->right);

    // Free the memory allocated for the root node
    free(tree);
}
