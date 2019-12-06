#include "binary_trees.h"
/**
 * binary_tree_insert_left - C function to insert node to left side of tree
 * @parent: pointer to node addition
 * @value: value to be added
 * Return: return pointer to new node added
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *node_left;

	if (parent == NULL)
		return (NULL);
	node_left = binary_tree_node(parent, value);
	if (parent->left != NULL)
	{
		node_left->left = parent->left;
		node_left->left->parent = node_left;
	}
	parent->left = node_left;

	return (node_left);
}
