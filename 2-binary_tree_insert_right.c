#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as a right-child of another node
 * @parent: parent node to insert the right child insert
 * @value: date the new node will store
 * Return: new node or NULL if failure on malloc or parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (parent == NULL)
		return (NULL);
	right_child = malloc(sizeof(binary_tree_t));
	if (right_child == NULL)
		return (NULL);

	right_child->n = value;
	right_child->left = NULL;
	right_child->parent = parent;

	if (parent->right == NULL)
		parent->right = right_child, right_child->right = NULL;
	else
	{
		right_child->right = parent->right;
		parent->right->parent = right_child;
		parent->right = right_child;
	}
	return (right_child);
}
