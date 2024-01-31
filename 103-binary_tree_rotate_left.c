#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Function that  rotates left the binary tree.
 * @tree: The root node of the three
 * Return: Pointer node of the new node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_lefty;

	if (tree == NULL || tree->right == NULL)
	{
		return (NULL);
	}
	new_lefty = tree->right;
	tree->right = new_lefty->left;
	if (new_lefty->left != NULL)
	{
		new_lefty->left->parent = tree;
	}
	new_lefty->left = tree;
	new_lefty->parent = tree->parent;
	tree->parent = new_lefty;
	return (new_lefty);
}
