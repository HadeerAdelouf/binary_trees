#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree.
* @tree: A pointer to the root node of the tree to measure the height.
* Return: Height of the binary tree, or 0 if the tree is NULL.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int left = 1, right = 1;

		if (tree->right)
			right +=  binary_tree_height(tree->right);
		if (tree->left)
			left +=  binary_tree_height(tree->left);
		if (left > right)
			return (left);
		else
			return (right);
	}
	else
		return (0);
}

/**
* binary_tree_is_perfect - Checks if a binary tree is perfect.
* @tree: A pointer to the root node of the tree to check.
* Return: 1 if the tree is perfect, 0 otherwise.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	return ((left_height == right_height) &&
	       binary_tree_is_perfect(tree->left) &&
	       binary_tree_is_perfect(tree->right));
}
