#include "binary_trees.h"

/**
 * binary_tree_depth - calculates depth of tree
 * @tree: pointer to node to measure depth
 * Return: depth of tree or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	for (depth = 0; tree->parent != NULL; depth++)
	       tree = tree->parent;

	return (depth);
}
