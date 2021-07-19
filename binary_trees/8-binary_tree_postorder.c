#include "binary_trees.h"

/**
 * binary_tree_postorder - Check if a node is a root
 * 
 * @tree: check if node is a root
 * @func: pointer to a function to call for each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
    return;

    binary_tree_postorder(tree->left, func);
    binary_tree_postorder(tree->right, func);  
    func(tree->n);
}