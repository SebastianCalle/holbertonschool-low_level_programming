#include "binary_trees.h"

/**
 * binary_tree_sibling - function that check if node have sibling
 * @node: node to check
 * Return: node sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = NULL, *sibling = NULL;

	if (!node || !node->parent)
		return (NULL);

	parent = node->parent;

	if (parent->left->n == node->n)
	{
		if (parent->right != NULL)
			sibling = parent->right;
		else
			return (NULL);
	}
	if (parent->right->n == node->n)
	{
		if (parent->left != NULL)
			sibling = parent->left;
		else
			return (NULL);
	}
	return (sibling);
}
