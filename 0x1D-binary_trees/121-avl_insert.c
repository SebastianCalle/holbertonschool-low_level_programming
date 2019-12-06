#include "binary_trees.h"
/**
 * bst_insert - insert a node
 * @tree: root
 * @value: value of the node
 * Return: pointer to the node
 */
bst_t *avl_insert_node(bst_t **tree, int value)
{
	bst_t *new = NULL, *x;

	if (!tree)
		return (NULL);
	if (*tree == NULL)
	{
		*tree = binary_tree_node(*tree, value);
		if (*tree)
			(*tree)->parent = NULL;
		return (*tree); }
	x = *tree;
	while (1)
	{
		if (value < x->n)
		{
			if (!x->left)
			{
				new = binary_tree_node(*tree, value);
				new->parent = x;
				return (x->left = new);
			}
			x = x->left;
		}
		else
		{
			if (!x->right)
			{
				new = binary_tree_node(*tree, value);
				new->parent = x;
				return (x->right = new);
			}
			x = x->right;
		}
		if (value == x->n)
		{
			free(new);
			return (NULL);
		}
	}
}
/**
 * avl_insert - insert node
 * @tree: pointer to node
 * @value: value of node
 * Return: node
 */
avl_t *avl_insert(avl_t **tree, int value)
{
	int factor_balance = 0;
	avl_t *node, *parent;

	if (tree == NULL)
		return (NULL);

	node = avl_insert_node(tree, value);
	if (!node)
		return (NULL);
	parent = node->parent;
	while (parent)
	{
		factor_balance = binary_tree_balance(parent->parent);
		if (factor_balance > 1 && node->n > parent->n)
		{
			binary_tree_rotate_left(parent);
			binary_tree_rotate_right(node->parent);
		}
		if (factor_balance > 1 && node->n < parent->n)
			binary_tree_rotate_right(parent);
		if (factor_balance < -1 && node->n < parent->n)
		{
			binary_tree_rotate_right(parent);
			binary_tree_rotate_left(node->parent);
		}
		if (factor_balance < -1 && node->n > parent->n)
			binary_tree_rotate_left(parent);
		parent = parent->parent;
	}
	return (node);
}
