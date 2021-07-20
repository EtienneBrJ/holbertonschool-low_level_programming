#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Check if a binatry tree is perfectl
 * 
 * @tree: binary tree
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	return is_perfect(tree, binary_tree_depth(tree), 0);
}

/**
 * is_perfect - Check if a binatry tree is perfectl
 * 
 * @tree: binary tree
 * @depth: depth of the tree
 * @level: level of the tree
 */

int is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (depth == level + 1);

	if (!tree->left || !tree->right)
		return (0);

	return (is_perfect(tree->left, depth,  level + 1) &&
			is_perfect(tree->right, depth,  level + 1));
}

/**
 * binary_tree_depth - Measures the depth of a binary tree
 * 
 * @tree: tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
    int depth = 0;

    if (!tree)
        return 0;
        
    for (; tree->parent; tree = tree->parent, depth++);
    return (depth);
}