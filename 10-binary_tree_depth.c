#include "binary_trees.h"

/**
 * binary_tree_depth - Function measures depth of @tree node
 * @tree: Pointer to the node to measure the depth
 * Return: 0 if NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || !tree->parent)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
