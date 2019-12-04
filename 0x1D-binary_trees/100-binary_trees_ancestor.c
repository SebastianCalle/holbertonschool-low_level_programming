#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds lowest ancestor
 * @first: node to check
 * @second:second node
 * Return: pointer to lowest parent
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *temp = (binary_tree_t *)second,
		*temp2 = (binary_tree_t *)first;

	if (!first || !second)
		return (NULL);

	if (first->n == second->parent->n)
		return (temp2);

	else if (second->n == first->parent->n)
		return (temp);
	while (temp2->parent != NULL)
	{
		temp = (binary_tree_t *)second;
		while (temp->parent != NULL)
		{
			if (temp2->parent->n == temp->parent->n)
				return (temp2->parent);
			temp = temp->parent;
		}
		temp2 = temp2->parent;
	}
	return (NULL);
}
