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
	binary_tree_t *temp = (binary_tree_t *)first,
		*temp2 = (binary_tree_t *)second;

	if (!first || !second)
		return (NULL);
	if (temp->parent == NULL)
		temp->parent = temp;
	else if (temp2->parent == NULL)
		temp->parent = temp;
	if (first->n == second->parent->n)
		return (temp2);
	else if (second->n == first->parent->n)
		return (temp);

	while (temp->parent != NULL)
	{
		temp2 = (binary_tree_t *)second;
		while (temp2->parent != NULL)
		{
			if (temp->parent->n == temp2->parent->n)
				return (temp->parent);
			temp2 = temp2->parent;
		}
		temp2 = temp2->parent;
	}
	return (NULL);
}
