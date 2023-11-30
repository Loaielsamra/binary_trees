#include "binary_trees.h"

/**
 * binary_tree_uncle - finds node's uncle
 * @node: node to find uncle of
 * Return: uncle node or NULL if failed
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	parent = node->parent;

	if (parent->parent->left != parent)
		return (parent->parent->left);
	return (parent->parent->right);
}
