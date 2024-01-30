#include "binary_trees.h"
/**
* binary_tree_height - measures the height of a binary tree.
*@tree: pointer to the root node of the tree to measure the height
* Return: 0 if tree is NULL
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

/**
* binary_tree_balance - measures the balance factor of a binary tree.
*@tree: pointer to the root node of the tree to measure the balance factor.
* Return: 0 If tree is NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left)
		- binary_tree_height(tree->right));
}
