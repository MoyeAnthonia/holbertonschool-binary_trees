#include "binary_trees.h"



/**
 * binary_tree_nodes - function that measures nodes of tree
 * @tree: Pointer to the root node of the tree to traverse
 * Return: 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (!tree)
return (0);

if (tree->left != NULL || tree->right != NULL)
return (binary_tree_nodes(tree->left) +
binary_tree_nodes(tree->right) + 1);

return (0);
}
