#include "binary_trees.h"
/**
 * binary_Tree_sibling - function that check if node have sibling
 * @node: node to check
 * Return: node sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent, *sibling = NULL;

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

/**
 * binary_tree_uncle - function that search uncle of node
 * @node: node to check
 * Return the node of uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;
	if (!node)
		return (NULL);

	uncle = binary_tree_sibling(node->parent);
	return (uncle);
}
