#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *@tree: pointer to the root node of the tree to measure the height
 * Return: zero if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int left_subtree = 0, right_subtree = 0;

		if (tree->right)
			right_subtree = 1 + binary_tree_height(tree->right);
		if (tree->left)
			left_subtree = 1 + binary_tree_height(tree->left);
		if (right_subtree > left_subtree)
			return (right_subtree);
		else
			return (left_subtree);
	}
	else
		return (0);
}
