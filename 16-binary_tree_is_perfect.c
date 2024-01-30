#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree.
 *@tree: pointer to the root node of the tree to measure the height.
 * Return: if tree is NULL, your function must return 0.
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
		if (left_subtree > right_subtree)
			return (left_subtree);
		else
			return (right_subtree);
	}
	else
		return (0);
}

/**
 * binary_tree_size - measures the size of a binary tree.
 *@tree: pointer to the root node of the tree to measure the size.
 * Return: if tree is NULL, must return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	{
		size_t left_node, right_node;

		left_node = binary_tree_size(tree->left);
		right_node = binary_tree_size(tree->right);
		return (1 + left_node + right_node);
	}
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 *@tree: pointer to the root node of the tree to check.
 * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t actual_height = 0, actual_size = 0;

	if (tree == NULL)
		return (0);
	actual_height = binary_tree_height(tree);
	actual_size = (1 << (actual_height + 1)) - 1;
	if (actual_size == binary_tree_size(tree))
		return (1);
	else
		return (0);
}
