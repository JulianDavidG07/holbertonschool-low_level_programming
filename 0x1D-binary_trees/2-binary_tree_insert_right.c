#include "binary_trees.h"
/**
 * binary_tree_insert_right - C function to insert node to right side of tree
 * @parent: pointer to node addition
 * @value: value to be added
 * Return: return pointer to new node added
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *node_rigth;

	if (parent == NULL)
		return (NULL);
	node_rigth = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		node_rigth->right = parent->right;
		node_rigth->right->parent = node_rigth;
	}
	parent->right = node_rigth;

	return (node_rigth);
}
