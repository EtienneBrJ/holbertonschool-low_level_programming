#include "binary_trees.h"

/**
 * binary_tree_nodes - Count the node with at least 1 child in a binary tree
 * 
 * @tree: binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (!tree)
        return 0;

    if (tree->left && tree->right)
        return 3;
    
    if (tree->left || tree-> right)
        return 1;

    return 0;
}