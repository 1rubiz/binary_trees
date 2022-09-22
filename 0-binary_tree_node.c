#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_t - A function that creates a binary tree node
 * @parent - pointrer to parent node
 * @value - value of the new node
 * Return - pointer to a new binary tree node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *myNode;

    myNode = malloc(sizeof(binary_tree_t));
    if (myNode == Null)
           return (NULL);
    myNode->parent = parent;
    myNode->n = value;
    myNode->left = NULL;
    myNode->right = NULL;
    
    return (myNode)
}
