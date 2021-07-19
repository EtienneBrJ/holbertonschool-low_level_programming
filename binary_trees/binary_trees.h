#ifndef B_TREES_H
#define B_TREES_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* Print function */
void binary_tree_print(const binary_tree_t *tree);

/* Create a binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Insert a node as the left-child of another node */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* Insert a node as the left-child of another node */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* Deletes an entiere binqry tree */
void binary_tree_delete(binary_tree_t *tree);

/* Checks if a node is a leaf */
int binary_tree_is_leaf(const binary_tree_t *node);

/* Check if a node is a root */
int binary_tree_is_root(const binary_tree_t *node);




/* Binary Search Tree */
typedef struct binary_tree_s bst_t;

/* AVL Tree */
typedef struct binary_tree_s avl_t;

/* Max Binary Heap */
typedef struct binary_tree_s heap_t;

#endif