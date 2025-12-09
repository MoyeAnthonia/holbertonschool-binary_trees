#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures balance of tree
 * @tree: Pointer to the root node of the tree to traverse
 * Return: 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{

size_t left_h, right_h;

if (!tree)
return (0);

left_h = tree->left ? 1 + binary_tree_height(tree->left) : 0;
right_h = tree->right ? 1 + binary_tree_height(tree->right) : 0;

return (left_h > right_h ? left_h : right_h);
}
