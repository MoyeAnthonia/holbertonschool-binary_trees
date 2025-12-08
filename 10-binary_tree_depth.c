#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures height of tree
 * @tree: Pointer to the root node of the tree to traverse
 * Return: 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;

if (!tree)
return (0);

while (tree->parent != NULL)
{
depth++;
tree = tree->parent;
}

return (depth);
}
