#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if a node is a root
 * 
 * @tree: check if node is a root
 * @func: pointer to a function to call for each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
        return;

    func(tree->n);
    binary_tree_preorder(tree->left, func);
    binary_tree_preorder(tree->right, func);  
}