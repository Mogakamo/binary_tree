#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as a left-child of another node
 * @parent: parent node to insert the left child in
 * @value: value to put in the new node
 * Return: new node or NULL if failure or parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	if (!parent)
		return (NULL);
	left_child = binary_tree_node(parent, value);
	if (!left_child)
		return (NULL);

	if (parent->left)
	{
		left_child->left = parent->left;
		parent->left->parent = left_child;
		left_child->parent = parent;
	}
	parent->left = left_child;

	return (left_child);
}
