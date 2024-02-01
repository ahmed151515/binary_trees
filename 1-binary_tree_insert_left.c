#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 * Return: Pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = binary_tree_node(parent, value);

	if (new == NULL)
	{
		return (NULL);
	}

	if (parent->left == NULL)
	{
		parent->left = new;
	} 
	else
	{
		new->left = parent->left;
		parent->left = new;
	}

	return (new);
}