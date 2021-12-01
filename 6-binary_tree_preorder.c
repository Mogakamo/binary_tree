#include "binary_trees.h"

/**
 * binary_tree_preorder - Function uses preorder traversal to go through tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (tree->left)
		func(tree->n), binary_tree_preorder(tree->left, func);

	if (tree->right)
	{
		if (tree->left == NULL)
			func(tree->n);

		binary_tree_preorder(tree->right, func);
	}

	if (!tree->left && !tree->right)
		func(tree->n);
}
