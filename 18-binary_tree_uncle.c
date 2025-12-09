#include "binary_trees.h"

/**
 * binary_tree_uncle- function that finds
 * uncle of a node
 * @tree: Pointer to the root node of the tree to traverse
 * Return: 0
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *parent, *grandparent;

if (!node || !node->parent || !node->parent->parent)
return (NULL);

parent = node->parent;
grandparent = parent->parent;

if (grandparent->left == parent)
return (grandparent->right);

return (grandparent->left);
}
