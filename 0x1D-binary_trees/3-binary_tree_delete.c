#include "binary_trees.h"
/**
 * binary_tree_delete - C function to delete a tree
 * @tree: pointer to delete
 * Return: return tree delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
	return;

free(tree->left);
free(tree->right);

}
