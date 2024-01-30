#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node as the left-child
 *@parent: a pointer to the node to insert the left-child in.
 *@value: the value to store in the new node.
 * Return: pointer to created node, or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

if (!parent)
return (NULL);

new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
return (NULL);

new_node->n = value;
new_node->parent = parent;
new_node->left = NULL;
new_node->right = NULL;

if (parent->left == NULL)
parent->left = new_node;
else
{
/*
*If parent already has a left-child,the new node must take its place & the old
*left-child must be set as the left-child of the new node.
*/
new_node->left = parent->left;
parent->left = new_node;
new_node->left->parent = new_node;
}
return (new_node);
}
