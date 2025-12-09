#include "binary_trees.h"

/**
 * binary_tree_is_sibling - function that finds
 * sibling of a node
 * @node: Pointer to the root node of the tree to traverse
 * Return: 0
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!node || !node->parent)
return (NULL);

if (node->parent->left == node)
return (node->parent->right);

return (node->parent->left);
}
