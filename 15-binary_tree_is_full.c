#include "binary_trees.h"

/**
 * binary_tree_is_full- function that checks
 * on binary balance of tree
 * @tree: Pointer to the root node of the tree to traverse
 * Return: 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{

if (!tree)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (1);

if (tree->left == NULL || tree->right == NULL)
return (0);

return (binary_tree_is_full(tree->left) &&
binary_tree_is_full(tree->right));

}
