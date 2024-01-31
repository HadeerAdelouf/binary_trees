#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Function that  rotates right the binary tree.
 * @tree: The root node of the three
 * Return: Pointer node of the new node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_righty;

	if (tree == NULL || tree->left == NULL)
	{
		return (NULL);
	}
	new_righty = tree->left;
	tree->left = new_righty->right;
	if (new_righty->right != NULL)
	{
		new_righty->right->parent = tree;
	}
	new_righty->right = tree;
	new_righty->parent = tree->parent;
	tree->parent = new_righty;
	return (new_righty);
}
